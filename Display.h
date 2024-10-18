#pragma once
#include <iostream>
#include <string>
class Display
{
public:
	Display();
	void Init();
	void Welcome(std::string user);
	void GetUser();
	void GetPassword();
	void ErrorAuth();
	void MenuAdmin();
	void MenuCustomer();
};



