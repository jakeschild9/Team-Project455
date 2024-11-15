#include <iostream>
#include <string>
#include "menus.h"
#include "Customer.h"
#include "Product.h"
#include "Customer.h"
#include "CustomerManager.cpp"
#include "ProductManager.cpp"
#include "Transaction.h"
#include "TransactionManager.cpp"
int main() {
    int choice = 0; // user's choice for CLI
    int managersChoice = 0; // manager's choice for CLI
    int userChoice = 0; // choice for user menu
    CustomerManager newCustomer;  // instance of CustomerManager class
    CustomerManager existingCustomer; // instance of CustomerManager class
    ProductManager newProduct; // instance of ProductManager class
    ProductManager existingProduct; // instance of ProductManager class
    Customer customer; // customer object
    std::string usernameEntered; // string var to hold the username entered by the user

    while (true) {
        mainMenu();
        std::cin >> choice;

        if (choice == 1) {
            managerMenu();
            std::cin >> managersChoice;
            if (!managerTools(managersChoice)) break;
        }
        else if (choice == 2) {
            std::cout << "Enter Your Username: " << std::endl;
            std::cin >> usernameEntered; 
            existingCustomer.loginWithUsername(usernameEntered);
            std::cout << "Logged in as " << usernameEntered << std::endl;
            userMenu();
            std::cin >> userChoice;
        }
        else if (choice == 3) {
            newCustomer.registerCustomer();
        }
        else if (choice == 4) {
            std::cout << "Exiting the Program. Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Invalid choice, please try again." << std::endl;
        }
    }

    return 0;
}