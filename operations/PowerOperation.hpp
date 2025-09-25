#ifndef POWEROPERATION_HPP
#define POWEROPERATION_HPP

#include "IOperation.hpp"
#include <cmath>

class PowerOperation : public IOperation {
public:
    double execute(double a, double b = 0) override;
};

#endif