#include "UserSessionInfo.h"

UserSessionInfo::UserSessionInfo() {
	
}

UserSessionInfo::UserSessionInfo(int id, std::string username, Role role) {

	ID = id;
	Username = username;
	UserRole = role;
	Exist = true;

}

