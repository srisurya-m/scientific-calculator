#ifndef LNOPERATION_HPP
#define LNOPERATION_HPP
#include<bits/stdc++.h>
using namespace std;

#include "IOperation.hpp"
#include <cmath>

class LnOperation : public IOperation {
public:
    double execute(double a, double b = 0) override;
};

#endif