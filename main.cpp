// #include <iostream>
// #include "facade/CalculatorFacade.hpp"

// int main() {
//     CalculatorFacade calc;

//     std::cout << "Sqrt(16) = " << calc.perform("sqrt", 256) << std::endl;
//     std::cout << "Factorial(5) = " << calc.perform("fact", 5) << std::endl;
//     std::cout << "Ln(10) = " << calc.perform("ln", 10) << std::endl;
//     std::cout << "Power(2, 8) = " << calc.perform("pow", 2, 4) << std::endl;

//     return 0;
// }

#include <iostream>
#include "facade/CalculatorFacade.hpp"

void printMenu() {
    std::cout << "\nSelect an operation:\n";
    std::cout << "1. Square Root (sqrt)\n";
    std::cout << "2. Factorial (fact)\n";
    std::cout << "3. Natural Log (ln)\n";
    std::cout << "4. Power (pow)\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    CalculatorFacade calc;
    int choice;
    double num1, num2;

    while (true) {
        printMenu();
        std::cin >> choice;

        if (choice == 5) {
            break;
        }

        std::string operation;
        switch (choice) {
            case 1:
                operation = "sqrt";
                std::cout << "Enter a number: ";
                std::cin >> num1;
                std::cout << "Result: " << calc.perform(operation, num1) << std::endl;
                break;
            case 2:
                operation = "fact";
                std::cout << "Enter a number: ";
                std::cin >> num1;
                std::cout << "Result: " << calc.perform(operation, num1) << std::endl;
                break;
            case 3:
                operation = "ln";
                std::cout << "Enter a number: ";
                std::cin >> num1;
                std::cout << "Result: " << calc.perform(operation, num1) << std::endl;
                break;
            case 4:
                operation = "pow";
                std::cout << "Enter the base: ";
                std::cin >> num1;
                std::cout << "Enter the exponent: ";
                std::cin >> num2;
                std::cout << "Result: " << calc.perform(operation, num1, num2) << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }

    return 0;
}