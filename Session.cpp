#include "Session.h"



int Session::GetUserLogged() {
	return UserLogged;


}

Role Session::GetRole() {
	return UserRole;


}

bool Session::isUserLoggedIn() {
	return LoggedIn;
}
	/*
void Session::SetUserLogged(int user) {
	UserLogged = user;
}

}
void Session::SetLoggedIn(bool status) {
	LoggedIn = status;
}*/

void Session::Authenticate(Accounts accountsList) {

	while (!LoggedIn){
	std::string user;
	std::string password;


	DisplayOnScreen.GetUser();
	if (std::cin.peek() == '\n')
		std::cin.ignore();
	std::getline(std::cin, user);
	DisplayOnScreen.GetPassword();
	if (std::cin.peek() == '\n')
		std::cin.ignore();

	std::getline(std::cin, password);

	//std::cout << "\nTu usuario es: " << user << " y tu contraseña es: " << password << "\n";
	UserSessionInfo RetriveAccount = accountsList.GetUserForAuth(user, password);
	if(RetriveAccount.Exist){


	UserLogged = RetriveAccount.ID;
	LoggedIn = true;
	UserRole = RetriveAccount.UserRole;
	system("cls");
	std::cout << "Bienvenido " << RetriveAccount.Username << "\n";

	return;
	}

	system("cls");
	DisplayOnScreen.Init();
	std::cout << "Usuario y/o contrasena incorrectas\n";
	}
	return;



	
}

void Session::LogOff() {

	std::cout << "Cerrando sesion\n";
	LoggedIn = false;
}
