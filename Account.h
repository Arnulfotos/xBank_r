#pragma once
#include <string>
#include "Roles.h"

class Account
{
public:
	int ID;
	Role UserRole;
	std::string Name;
	std::string Username;
	std::string Password;
	int Age;
	std::string Address;

	std::string Email;
	std::string Phone;
	int Balance = 0;
	bool LoggedIn;

	Account(int id, Role role, std::string name, std::string user, std::string password, std::string email, std::string phone);
	Account(int id, Role role, std::string name, std::string user, std::string password, int age, std::string address, std::string email, std::string phone, double balance);
	void deposit(int quantity);
	void getBalance();
	
	void withdraw(int quantity);
};

