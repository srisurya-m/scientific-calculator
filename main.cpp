#include<bits/stdc++.h>
using namespace std;
#include "facade/CalculatorFacade.hpp"

void printMenu() {
    cout << "\nSelect an operation:\n";
    cout << "1. Square Root (sqrt)\n";
    cout << "2. Factorial (fact)\n";
    cout << "3. Natural Log (ln)\n";
    cout << "4. Power (pow)\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    CalculatorFacade calc;
    int choice;
    double num1, num2;

    while (true) {
        printMenu();
        cin >> choice;

        if (choice == 5) {
            break;
        }

        string operation;
        switch (choice) {
            case 1:
                operation = "sqrt";
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << calc.perform(operation, num1) << endl;
                break;

            case 2:
                operation = "fact";
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << calc.perform(operation, num1) << endl;
                break;

            case 3:
                operation = "ln";
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << calc.perform(operation, num1) << endl;
                break;

            case 4:
                operation = "pow";
                cout << "Enter the base: ";
                cin >> num1;
                cout << "Enter the exponent: ";
                cin >> num2;
                cout << "Result: " << calc.perform(operation, num1, num2) << endl;
                break;
                
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}