// menus.h

#ifndef MENUS_H
#define MENUS_H

#include <iostream>
#include <string>
#include "Customer.h"
#include "Product.h"
#include "Transaction.h"

// Function declarations
void mainMenu();
void managerMenu();
void custRemoval();
void prodRemoval();
void viewCust();
bool managerTools(int managersChoice);
void userMenu();
bool userTools(int userChoice);

#endif // MENUS_H