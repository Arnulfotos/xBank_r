#pragma once
#include "Accounts.h"
#include "Display.h"
#include "Operations.h"
#include "Session.h"
class Controller
{
public:
	Display DisplayOnScreen;
	int input;
	void LoadOperations(Session logger, Accounts lista);
};

