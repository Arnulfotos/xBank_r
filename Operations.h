#pragma once
#include "Roles.h"
#include "Accounts.h"
#include "Session.h"
#include "Validations.h"

class Operations
{

public:
	int _input;
	Operations();
	Validations Validation;

	int action;
	std::string inputString;
	void ExecuteAdmin(int input, Session& session, Accounts& list);
	void CreateUser(Accounts& list);
	void DeleteUser(Accounts& list);
	void ReadUsers(Accounts& list);
	void ReadUser(Accounts& list);
	void ExecuteClient(int input, Session& session, Accounts& list);
	void Depositar(Session& session, Accounts& list);
	void Retirar(Session& session, Accounts& list);
	void EditUsers(Accounts& list);
	void LogOut(Session& session);
	void ReadInfo(Accounts& list);

};

