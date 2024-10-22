#pragma once
#include "Accounts.h"
#include "Session.h"
#include "Controller.h"
class Bank
{

public:
	Accounts AccountsList;
	Bank();
	Display DisplayOnScreen;
	Controller Controller;
	void Exe();
};

