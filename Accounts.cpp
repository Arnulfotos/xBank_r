#include "Accounts.h"
Accounts::Accounts() {
	Account admin(accountCounter,ADMIN, "Arnulfo Leon", "admin", "admin", "admin@xbank.com", "6642259769");
	List.insert(std::pair<int, Account>(accountCounter, admin));
	accountCounter += 1;
	Account customer(accountCounter, CUSTOMER, "Marcel Duchamp", "r_mutt", "fountain", 81, "Av. Gustave Eiffel, 75007 Paris, France", "dadaism@gmail.com", "6642256678", 0);
	List.insert(std::pair<int, Account>(accountCounter, customer));
	accountCounter += 1;
}


UserSessionInfo Accounts::GetUserForAuth(std::string user, std::string password) {
	std::map<int, Account>::iterator itr;

	for (itr = List.begin(); itr != List.end(); ++itr) {
		if (itr->second.Username == user && itr->second.Password == password) {

			UserSessionInfo RetrivedUser(itr->second.ID, itr->second.Username, itr->second.UserRole);
			return RetrivedUser;
		}
	}
	UserSessionInfo RetrivedUser;
	return RetrivedUser;
}


bool Accounts::GetUserForDelete(int input) {
	
	if (List.find(input) != List.end()) {
		return true;
	}

	return false;
}

void Accounts::DisplayUsers() {
	std::map<int, Account>::iterator itr;
	

	for (itr = List.begin(); itr != List.end(); ++itr){
		std::cout << itr->first << '\t' << itr->second.Name << '\t' << itr->second.Balance << '\n';

	
	}
	std::cout << '\n';
	
}

void Accounts::AddUsers(Role role, std::string name, std::string user, std::string password, int age, std::string address, std::string email, std::string phone, double balance) {
	std::map<int, Account>::iterator itr;

	Account newUser(accountCounter, role, name, user, password, age, address, email, phone, balance);
	List.insert(std::pair<int, Account>(accountCounter, newUser));
	accountCounter += 1;

	std::cout << "Cliente " << newUser.Name << " creado con exito\n";
}

void Accounts::DeleteUser(int input) {

	std::cout << "Cliente " << List.at(input).Name << " elimitado con exito\n";
	List.erase(input);

}
void Accounts::DisplayUserInfo(int input) {

	std::cout << "1. Name\t" << List.at(input).Name << '\n';
	std::cout << "2. Username\t" << List.at(input).Username << '\n';
	std::cout << "3. Age\t" << List.at(input).Age << '\n';
	std::cout << "4. Address\t" << List.at(input).Address << '\n';
	std::cout << "5. Email\t" << List.at(input).Email << '\n';
	std::cout << "6. Phone\t" << List.at(input).Phone << '\n';

}

void Accounts::DisplayMyInfo(int input) {

	std::cout << "1. Name\t" << List.at(input).Name << '\n';
	std::cout << "2. Username\t" << List.at(input).Username << '\n';
	std::cout << "3. Age\t" << List.at(input).Age << '\n';
	std::cout << "4. Address\t" << List.at(input).Address << '\n';
	std::cout << "5. Email\t" << List.at(input).Email << '\n';
	std::cout << "6. Phone\t" << List.at(input).Phone << '\n';
	std::cout << "7. Balance\t" << List.at(input).Balance << '\n';

}

void Accounts::EditUserProperty(int selectedUser, int selectedProperty) {
	std::string newValue;
	switch (selectedProperty) {
	case 1:
		std::cout << "Edita Name\n";
		if (std::cin.peek() == '\n')
			std::cin.ignore();

		std::getline(std::cin, newValue);
		List.at(selectedUser).Name = newValue;
		break;
	case 2:
		std::cout << "Edita Username\n";
		if (std::cin.peek() == '\n')
			std::cin.ignore();

		std::getline(std::cin, newValue);
		
		List.at(selectedUser).Username = newValue;
		break;
	case 3:
		std::cout << "Edita Age\n";

		if (std::cin.peek() == '\n')
			std::cin.ignore();

		std::getline(std::cin, newValue);

		List.at(selectedUser).Age = stoi(newValue);
		break;
	case 4:
		std::cout << "Edita Address\n";
		if (std::cin.peek() == '\n')
			std::cin.ignore();

		std::getline(std::cin, newValue);
		

		List.at(selectedUser).Address = newValue;
		break;
	case 5:
		std::cout << "Edita Email\n";
		if (std::cin.peek() == '\n')
			std::cin.ignore();

		std::getline(std::cin, newValue);
		

		List.at(selectedUser).Email = newValue;
		break;
	case 6:
		std::cout << "Edita Phone\n";
		if (std::cin.peek() == '\n')
			std::cin.ignore();

		std::getline(std::cin, newValue);
		

		List.at(selectedUser).Phone = newValue;
		break;
	default:
		std::cout << "Operacion no valida\n";
		break;
	}

	std::cout << "Edicion exitosa";
	


}
