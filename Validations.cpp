#include "Validations.h"
#include <iostream>
bool Validations::ValidationStatus(std::string index, UserForm &form) 
{
	return form.Form.at(index).second;
}

void  Validations::Validate(std::string input, std::string index, UserForm &form)
{

	switch (index[0] - '0') {
		case 1:
		case 5:
			for (char ch : input) {
				if (!isdigit(ch)) {
					std::cout << "Ingrese un valor correcto\n";
					return;
				}
			}
			form.Form.at(index).first = input;
			form.Form.at(index).second = true;
			break;
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
		case 9:
			if (!input.empty()) {
				form.Form.at(index).first = input;
				form.Form.at(index).second = true;
	
				return;
			}
			else {
				std::cout << "No puede ingresar valores vacios\n";
			}
		
			break;

		case 7:
			if (isValid(input)) {
				form.Form.at(index).first = input;
				form.Form.at(index).second = true;

				return;
			}
			else {
				std::cout << "Ingrese un correo electronico valido\n";
			}
			
			break;
		


	}
}

/*
	Form.insert(std::pair <std::string, InputAndValidation>("1. UserRole", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("2. Name", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("3. Username", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("4. Password", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("5. Age", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("6. Address", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("7. Email", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("8. Phone", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("9. Balance", InputAndValidation("", false)));

*/

bool Validations::isValid(const std::string email)
{

	// Regular expression definition 
	const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

	// Match the string pattern 
	// with regular expression 
	return regex_match(email, pattern);
};