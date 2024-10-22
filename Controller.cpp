#include "Controller.h"



void Controller::LoadOperations(Session &logger, Accounts &lista) {

	Operations operation;
	switch(logger.GetRole()) {

		case (Role)ADMIN:
			DisplayOnScreen.MenuAdmin();
			std::cin >> input;
			
			operation.ExecuteAdmin(input,logger,lista);
			break;

		case (Role)CUSTOMER:
			DisplayOnScreen.MenuCustomer();
			std::cin >> input;
			operation.ExecuteClient(input, logger, lista);
			break;


	}

}