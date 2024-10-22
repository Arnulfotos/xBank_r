#include "Bank.h"

Bank::Bank() {

}
void Bank::Exe() {
	//nested -> log in and operations
	// while -> !input erroneo
	// Agregar Validations

	bool exit = false;

	while (!exit) {
		Session Logger;
		system("cls");
		DisplayOnScreen.Init();
		Logger.Authenticate(AccountsList);


		while (Logger.isUserLoggedIn()) {
			Controller.LoadOperations(Logger, AccountsList);
			//DisplayOnScreen.GetUser();
			//std::string test;
			//std::getline(std::cin, test);
			//system("cls");
			//std::cout << "\nTu usuario es: " << test << "\n";
		}

	}
		
		


}