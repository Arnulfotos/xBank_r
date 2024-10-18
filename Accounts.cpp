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

void Accounts::DisplayUsers() {
	std::map<int, Account>::iterator itr;


	for (itr = List.begin(); itr != List.end(); ++itr){
		std::cout << itr->first << '\t';

	
	}
	std::cout << '\n';
	
}

void Accounts::AddUsers(Role role, std::string name, std::string user, std::string password, int age, std::string address, std::string email, std::string phone, double balance) {
	std::map<int, Account>::iterator itr;


	for (itr = List.begin(); itr != List.end(); ++itr) {
		std::cout << itr->first << '\t';


	}
	std::cout << '\n';


	for (itr = List.begin(); itr != List.end(); ++itr) {
		std::cout << itr->first << '\t';


	}

}


