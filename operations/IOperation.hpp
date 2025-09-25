#ifndef IOPERATION_HPP
#define IOPERATION_HPP

class IOperation {
public:
    virtual double execute(double a, double b = 0) = 0;
    virtual ~IOperation() = default;
};

#endif