#include "Display.h"
#include <chrono>
#include <format>
Display::Display(){}
const auto now = std::chrono::system_clock::now();
 
void Display::Init() {

    std::cout << R"(           /$$$$$$$                      /$$      
          | $$__  $$                    | $$      
 /$$   /$$| $$  \ $$  /$$$$$$  /$$$$$$$ | $$   /$$
|  $$ /$$/| $$$$$$$  |____  $$| $$__  $$| $$  /$$/
 \  $$$$/ | $$__  $$  /$$$$$$$| $$  \ $$| $$$$$$/ 
  >$$  $$ | $$  \ $$ /$$__  $$| $$  | $$| $$_  $$ 
 /$$/\  $$| $$$$$$$/|  $$$$$$$| $$  | $$| $$ \  $$
|__/  \__/|_______/  \_______/|__/  |__/|__/  \__/
                                                  
                                                  
                                                  )" << "\n";

    std::cout << R"(-=x=-=x=-=x=-=x=-=x=-=x=-=x= Developed by Arnulfotos (C) )" << std::format("{:%Y}", now) << R"( -=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-)" << "\n";


}

void Display::GetUser() {
    std::cout << "Ingrese su usuario:\n";

}

void Display::GetPassword() {
    std::cout << "Ingrese su password:\n";

}

void Display::ErrorAuth() {
    std::cout << "Usuario o contrasena incorrectos\n";

}

void Display::Welcome(std::string user) {
    std::cout << "Bienvenido " << user << '\n';
}

void Display::MenuAdmin() {
    std::cout << '\n' << R"(-=x=-=x=-=x=-=x=-=x=-=x=-=x= xBank -=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-)" << "\n";
    std::cout << "\nSeleccione una opcion\n";
    std::cout << "1.\tAgregar usuario\n";
    std::cout << "2.\tEliminar usuario\n";
    std::cout << "3.\tListar usuarios\n";
    std::cout << "4.\tEditar usuarios\n";
    std::cout << "5.\tRevisar usuario\n";
    std::cout << "\n9.\tLog out\n";
    std::cout << '\n';
    
}

void Display::MenuCustomer() {
    std::cout << '\n' << R"(-=x=-=x=-=x=-=x=-=x=-=x=-=x= xBank -=x=-=x=-=x=-=x=-=x=-=x=-=x=-=x=-)" << "\n";
    std::cout << "\nSeleccione una opcion\n";
    std::cout << "1.\tDepositar\n";
    std::cout << "2.\tRetirar\n";
    std::cout << "3.\tConsultar mi saldo\n";
    std::cout << "\n9.\tLog out\n";
    std::cout << '\n';

}