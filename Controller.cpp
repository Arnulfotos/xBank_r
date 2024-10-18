#include "Controller.h"



void Controller::LoadOperations(Session logger, Accounts lista) {

	Operations operation(logger, lista);
	
	switch(logger.GetRole()) {

		case (Role)ADMIN:
			DisplayOnScreen.MenuAdmin();
			std::cin >> input;
			
			operation.ExecuteAdmin(input);




			break;
		case (Role)CUSTOMER:
			DisplayOnScreen.MenuCustomer();
			break;


	}

}