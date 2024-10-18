#pragma once
#include "Roles.h"
#include "Accounts.h"
#include "Session.h"
#include "Validations.h"

class Operations
{

public:
	int _input;
	Session _logger;
	Validations Validation;
	Accounts _lista;
	Operations(Session logger, Accounts &list);

	int action;
	std::string inputString;
	void ExecuteAdmin(int input);
	void CreateUser();
	void DeleteUser();
	void ReadUsers();
	void EditUsers();
	void LogOut();

};

