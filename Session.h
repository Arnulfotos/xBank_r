#pragma once
#include "Display.h"
#include <string>
#include <map>
#include "UserSessionInfo.h"
#include "Account.h"
#include "Accounts.h"
class Session
{
public:
	void Authenticate(Accounts accountsList);
	Display DisplayOnScreen;
	bool LoggedIn = false;
	int UserLogged = 0;
	Role UserRole;
	bool isUserLoggedIn();
	int GetUserLogged();
	Role GetRole();
};

