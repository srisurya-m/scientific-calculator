#include "LnOperation.hpp"

double LnOperation::execute(double a, double b) {
    if(a <= 0) return -1; // invalid
    return std::log(a);
}