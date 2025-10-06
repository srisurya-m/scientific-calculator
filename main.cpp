#include <iostream>
#include "facade/CalculatorFacade.hpp"

int main() {
    CalculatorFacade calc;

    std::cout << "Sqrt(16) = " << calc.perform("sqrt", 256) << std::endl;
    std::cout << "Factorial(5) = " << calc.perform("fact", 5) << std::endl;
    std::cout << "Ln(10) = " << calc.perform("ln", 10) << std::endl;
    std::cout << "Power(2, 8) = " << calc.perform("pow", 2, 4) << std::endl;

    return 0;
}