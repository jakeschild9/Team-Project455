// menus.cpp

#include "menus.h"
#include "Customer.h"
#include "Product.h"
#include "CustomerManager.cpp"
#include "ProductManager.cpp"

// Function Definitions

void mainMenu() {
    std::cout << "===== Welcome =====" << std::endl;
    std::cout << "===== Select Your Role =====" << std::endl;
    std::cout << "===== By Entering The Corresponding Digit =====" << std::endl;

    std::cout << "===== 1. Manager =====" << std::endl;
    std::cout << "===== 2. Returning Customer =====" << std::endl;
    std::cout << "===== 3. New Customer =====" << std::endl;
    std::cout << "===== 4. Exit =====" << std::endl;

    std::cout << "=======================" << std::endl;
    std::cout << "Enter your choice (1-4): ";
}

void managerMenu() {
    std::cout << "===== Manager Page =====" << std::endl;
    std::cout << "===== Select Your Task =====" << std::endl;
    std::cout << "===== By Entering The Corresponding Digit =====" << std::endl;

    std::cout << "===== 1. Customer Removal =====" << std::endl;
    std::cout << "===== 2. Product Addition =====" << std::endl;
    std::cout << "===== 3. Product Removal =====" << std::endl;
    std::cout << "===== 4. View Customer By ID =====" << std::endl;
    std::cout << "===== 5. Assign Reward Points =====" << std::endl;
    std::cout << "===== 6. Exit =====" << std::endl;

    std::cout << "Enter your choice (1-6): ";
}

void custRemoval() {
    CustomerManager existingCustomer;
    int userIDtoRemove;
    existingCustomer.outputUsernamesAndIDs();
    std::cout << "Enter the ID of the customer to be removed: ";
    std::cin >> userIDtoRemove;
    existingCustomer.removeCustomer(userIDtoRemove);
    std::cout << "Customer Removed Successfully!" << std::endl;
}

void prodRemoval() {
    ProductManager existingProduct;
    int prodIDtoRemove = 0;
    std::cout << "Enter the ID of the product to be removed: ";
    std::cin >> prodIDtoRemove;
    existingProduct.removeProduct(prodIDtoRemove);
    std::cout << "Product Removed Successfully!" << std::endl;
}

void viewCust() {
    CustomerManager existingCustomer;
    int userIDToFind = 0;
    std::cout << "Enter the ID of the customer to be viewed: ";
    std::cin >> userIDToFind;
    existingCustomer.outputUserInfo(userIDToFind);
}

bool managerTools(int managersChoice) {
    CustomerManager existingCustomer;
    ProductManager newProduct;
    ProductManager existingProduct;
    float rewardPtPercentage;
    
    switch (managersChoice) {
        case 1: {   // Customer Removal
            custRemoval();
            break;
        }
        case 2: // Product Addition
            newProduct.addProduct();
            break;
        case 3: { // Product Removal
            prodRemoval();
            break;
        }
        case 4: { // View Customer By ID
            viewCust();
            break;
        }
        case 5: // Assign Reward Points (implementation needed)
            // Implement reward points calculator
            break;
        case 6: // Exit
            std::cout << "Exiting the Program. Goodbye!" << std::endl;
            return false;
        default:
            std::cout << "Invalid choice, please try again." << std::endl;
            break;
    }
    return true;
}

void userMenu() {
    std::cout << "===== User Page =====" << std::endl;
    std::cout << "===== Select Your Task =====" << std::endl;
    std::cout << "===== By Entering The Corresponding Digit =====" << std::endl;

    std::cout << "===== 1. Shopping =====" << std::endl;
    std::cout << "===== 2. Redeem Rewards =====" << std::endl;
    std::cout << "===== 3. Exit =====" << std::endl;

    std::cout << "Enter your choice (1-3): ";
}

bool userTools(int userChoice) {
    switch (userChoice) {
        case 1:
            // Implement way for user to "shop"
            break;
        case 2:
            // Implement way for user to Redeem Rewards
            break;
        case 3:
            std::cout << "Exiting the Program. Goodbye!" << std::endl;
            return false;
        default:
            std::cout << "Invalid choice, please try again." << std::endl;
            break;
    }
    return true;
}