#include <iostream>
#include <cstdlib>

void showMenu() {
    std::cout << "********** ATM MACHINE **********" << std::endl;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit Amount" << std::endl;
    std::cout << "3. Withdraw Amount" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "*********************************" << std::endl;
}

int main() {
    int option;
    double balance = 960;
    double amount;

    do {
        showMenu();
        std::cout << "\nSelect option: ";
        std::cin >> option;

        system("cls");  // Optional — clears the screen after each loop

        switch (option) {
        case 1:
            std::cout << "Balance: $" << balance << "\n\n";
            break;

        case 2:
            std::cout << "Enter deposit amount: $";
            std::cin >> amount;
            balance += amount;
            std::cout << "Amount deposited successfully!\n\n";
            break;

        case 3:
            std::cout << "Enter withdraw amount: $";
            std::cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                std::cout << "Withdrawal successful!\n\n";
            }
            else {
                std::cout << "Insufficient Amount!\n\n";
            }
            break;

        case 4:
            std::cout << "Thank you for using the ATM !\n";
            break;

        default:
            std::cout << "Invalid Option. Please choose between 1 and 4 !\n\n";
        }

    } while (option != 4);

    return 0;
}