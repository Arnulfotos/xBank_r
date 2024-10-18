#pragma once
#include <string>
#include "Roles.h"

class UserSessionInfo
{

public:
	UserSessionInfo();
	UserSessionInfo(int id, std::string username, Role role);
	int ID;
	std::string Username;
	Role UserRole;
	bool Exist = false;
};

