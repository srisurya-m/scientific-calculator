#ifndef CALCULATORFACADE_HPP
#define CALCULATORFACADE_HPP

#include <string>

class CalculatorFacade {
private:
    class OperationManager* manager;

public:
    CalculatorFacade();
    double perform(const string& type, double a, double b = 0);
};

#endif