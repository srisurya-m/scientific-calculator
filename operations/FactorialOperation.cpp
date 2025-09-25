#include "FactorialOperation.hpp"

double FactorialOperation::execute(double a, double b) {
    if(a < 0) return -1; // invalid
    double res = 1;
    for(int i = 1; i <= static_cast<int>(a); i++) res *= i;
    return res;
}