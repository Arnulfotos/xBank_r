#include "Account.h"
#include <iostream>

Account::Account(int id, Role role, std::string name, std::string user, std::string password, std::string email, std::string phone) {
	ID = id;
	UserRole = (Role)role;
	Name = name;
	Username = user;
	Password = password;
	Email = email;
	Phone = phone;
	LoggedIn = false;

};

Account::Account(int id, Role role, std::string name, std::string user, std::string password, int age, std::string address, std::string email, std::string phone, double balance) {
	ID = id;
	UserRole = (Role)role;
	Name = name;
	Username = user;
	Password = password;
	Age = age;
	Address = address;
	Email = email;
	Phone = phone;
	Balance = balance;
	LoggedIn = false;


};



void Account::deposit(int quantity) {
	
	Balance += quantity;
	std::cout << "Deposito exitoso, tu saldo es:" << Balance << "\n";

}

void Account::getBalance() {
	std::cout << "Tu saldo es:" << Balance << "\n";
	
}

void Account::withdraw(int quantity) {
	if (quantity > Balance) {
		std::cout << "No tienes suficiente saldo\n";
		return;
	}
	Balance -= quantity;
	std::cout << "Returo exitoso, tu saldo es:" << Balance << "\n";


}
