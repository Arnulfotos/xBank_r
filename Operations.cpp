#include "Operations.h"
#include "UserForm.h"



Operations::Operations() {}


void Operations::ExecuteAdmin(int input, Session &session, Accounts &list) {
	_input = input;
	switch(_input){
		case 1:
			CreateUser(list);
			break;
		case 2:
			DeleteUser(list);
			break;
		case 3:
			ReadUsers(list);
			break;
		case 4:
			EditUsers(list);
			break;
		case 5:
			ReadUser(list);
			break;
		case 9:
			LogOut(session);
			break;
		default:
			std::cout << "Operacion no valida\n";
			break;
	}
}

void Operations::ExecuteClient(int input, Session& session, Accounts& list) {
	_input = input;
	switch (_input) {
	case 1:
		Depositar(session, list);
		
		

		break;
	case 2:
		Retirar(session, list);
		break;
	case 3:
		list.DisplayMyInfo(session.UserLogged);

		
		break;
	case 9:
		LogOut(session);
		break;
	default:
		std::cout << "Operacion no valida\n";
		break;
	}
}


void Operations::Depositar(Session& session, Accounts& list) {

	int deposito;
	std::cout << "Realice deposito\n";
	std::cin >> deposito;
	list.List.at(session.UserLogged).deposit(deposito);



}

void Operations::Retirar(Session& session, Accounts& list) {


	int retiro;
	list.List.at(session.UserLogged).getBalance();
	std::cout << "Realice retiro\n";
	std::cin >> retiro;
	list.List.at(session.UserLogged).withdraw(retiro);

}

void Operations::CreateUser(Accounts& list) {


	UserForm CreateForm;

	system("cls");
	std::cout << "+++++++++ Agregar Usuario +++++++++\n";
	std::cout << "Para User Role, 0 es Cliente, 1 es Admin\n";
	std::map<std::string, std::pair<std::string, bool>>::iterator itr;
	for (itr = CreateForm.Form.begin(); itr != CreateForm.Form.end(); ++itr)
	{
		
		
		while (!Validation.ValidationStatus(itr->first, CreateForm)) {
			
			std::cout << "\nAgregue " << itr->first << "\n";
			if (std::cin.peek() == '\n')
				std::cin.ignore();

			std::getline(std::cin, inputString);
			
			Validation.Validate(inputString, itr->first, CreateForm);
			//std::cin.ignore(1000, '\n');

		}



		//std::cout << itr->first << '\t' << itr->second.first << itr->second.second << '\n';
	}
	system("cls");
	std::cout <<"Creando usuario..." << '\n';

	list.AddUsers(
		(Role)stoi(CreateForm.Form.at("1. UserRole").first),
		CreateForm.Form.at("2. Name").first,
		CreateForm.Form.at("3. Username").first,
		CreateForm.Form.at("4. Password").first,
		stoi(CreateForm.Form.at("5. Age").first),
		CreateForm.Form.at("6. Address").first,
		CreateForm.Form.at("7. Email").first,
		CreateForm.Form.at("8. Phone").first,
		stoi(CreateForm.Form.at("9. Balance").first));


	std::cout << "Usuario creado con exito!" << '\n';


	/*for (itr = CreateForm.Form.begin(); itr != CreateForm.Form.end(); ++itr)
	{


		std::cout << itr->first << '\t' << itr->second.first << '\t' << '\n';



		//std::cout << itr->first << '\t' << itr->second.first << itr->second.second << '\n';
	}*/


	



	/*std::cout << "Seleccione el tipo de usuario a agregar\n";
	std::cout << "\t1. Cliente\n";
	std::cout << "\t2. Admin\n";
	
	
	
	
	
	
	Form.insert(std::pair <std::string, InputAndValidation>("1. UserRole", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("2. Name", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("3. Username", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("4. Password", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("5. Age", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("6. Address", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("7. Email", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("8. Phone", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("9. Balance", InputAndValidation("", false)));
	*/







}

void Operations::EditUsers(Accounts& list)
{
	int selectUser;
	int selectProperty;
	std::string newInput;
	system("cls");
	std::cout << "+++++++++ Lista de Usuarios +++++++++\n";
	list.DisplayUsers();
	std::cout << "Seleccione un usuario\n";
	std::cin >> selectUser;
	std::cout << "+++++++++ Lista de Datos +++++++++\n";
	list.DisplayUserInfo(selectUser);
	std::cout << "Seleccione un elemento a editar\n";
	std::cin >> selectProperty;
	list.EditUserProperty(selectUser,selectProperty);

}

void Operations::ReadUsers(Accounts& list)
{
	system("cls");
	std::cout << "+++++++++ Lista de Usuarios +++++++++\n";
	list.DisplayUsers();

}

void Operations::ReadUser(Accounts& list)
{
	system("cls");
	std::cout << "+++++++++ Lista de Usuarios +++++++++\n";
	list.DisplayUsers();
	std::cout << "Seleccione un usuario\n";
	int selectUser;
	std::cin >> selectUser;
	list.DisplayUserInfo(selectUser);

}



void Operations::DeleteUser(Accounts& list)
{
	int selectUser;
	int confirmation;
	system("cls");
	std::cout << "+++++++++ Lista de Usuarios +++++++++\n";
	list.DisplayUsers();
	std::cout << "Seleccione un usuario\n";
	std::cin >> selectUser;
	if (list.GetUserForDelete(selectUser)) {
		std::cout << "Esta seguro que desea borrar al usuario " << list.List.at(selectUser).Name << " ?\n";
		std::cout << "1. Si | 2. No\n";
		std::cin >> confirmation;
		switch (confirmation) {
		case 1:
			
				list.DeleteUser(selectUser);
			
			
			break;
		case 2:
			std::cout << "Operacion cancelada\n";
			break;
		}



	}
	else {
		std::cout << "No existe usuario\n";
	}
}

void Operations::LogOut(Session& session)
{
	session.LogOff();
	return;
}