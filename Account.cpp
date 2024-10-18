#include "Account.h"

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



double Account::deposit(double quantity) {
	Balance += quantity;
	return Balance;
}

double Account::getBalance() {
	return Balance;
}

double Account::withdraw(double quantity) {
	Balance -= quantity;
	return Balance;
}
