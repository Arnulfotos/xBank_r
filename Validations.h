#pragma once
#include <string>
#include "UserForm.h"
#include <regex>
class Validations
{

public:
	bool ValidationStatus(std::string index, UserForm &form);
	void Validate(std::string input, std::string index, UserForm &form);
	bool isValid(std::string email);
};

