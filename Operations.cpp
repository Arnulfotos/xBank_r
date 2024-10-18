#include "Operations.h"
#include "UserForm.h"





Operations::Operations(Session logger, Accounts &list) {
	_logger = logger;
	_lista = list;
}



void Operations::ExecuteAdmin(int input) {
	_input = input;
	switch(_input){
		case 1:
			CreateUser();
			break;
		case 2:
			//DeleteUser();
			break;
		case 3:
			ReadUsers();
			break;
		/*case 4:
			EditUsers();
			break;
		case 9:
			LogOut();*/

	}
}


void Operations::CreateUser() {


	UserForm CreateForm;

	system("cls");
	std::cout << "+++++++++ Agregar Usuario +++++++++\n";

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


	



	/*std::cout << "Seleccione el tipo de usuario a agregar\n";
	std::cout << "\t1. Cliente\n";
	std::cout << "\t2. Admin\n";*/







}

void Operations::ReadUsers()
{
	_lista.DisplayUsers();
}