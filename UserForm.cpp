#include "UserForm.h"
UserForm::UserForm() {
	Form.insert(std::pair <std::string, InputAndValidation>("1. UserRole", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("2. Name", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("3. Username", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("4. Password", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("5. Age", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("6. Address", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("7. Email", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("8. Phone", InputAndValidation("", false)));
	Form.insert(std::pair <std::string, InputAndValidation>("9. Balance", InputAndValidation("", false)));

}

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