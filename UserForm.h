#pragma once
#include <string>
#include <map>
#include "Roles.h"
class UserForm
{
public:

	typedef std::pair<std::string, bool> InputAndValidation;
	typedef std::map<std::string, InputAndValidation> FormMap;
	
	/*int seleccion;
	std::string input;

	Role UserRole;
	std::string Name;
	std::string Username;
	std::string Password;
	int Age;
	std::string Address;
	std::string Email;
	std::string Phone;
	double Balance; */
	UserForm();
	FormMap Form;
};

