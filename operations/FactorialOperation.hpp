#ifndef FACTORIALOPERATION_HPP
#define FACTORIALOPERATION_HPP

#include "IOperation.hpp"

class FactorialOperation : public IOperation {
public:
    double execute(double a, double b = 0) override;
};

#endif