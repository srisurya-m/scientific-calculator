#ifndef SQRTOPERATION_HPP
#define SQRTOPERATION_HPP

#include "IOperation.hpp"
#include <cmath>

class SqrtOperation : public IOperation {
public:
    double execute(double a, double b = 0) override;
};

#endif