#pragma once
#include <map>
#include "Account.h"
#include "Display.h"
#include "UserSessionInfo.h"
#include "Roles.h"

class Accounts
{
public:
	Accounts();
	void DisplayUsers();
	void AddUsers(Role role, std::string name, std::string user, std::string password, int age, std::string address, std::string email, std::string phone, double balance);
	std::map<int, Account> List;
	int accountCounter = 1;
	//int GetAccountCounter();
	UserSessionInfo GetUserForAuth(std::string user, std::string password);
};



