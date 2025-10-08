#ifndef OPERATIONFACTORY_HPP
#define OPERATIONFACTORY_HPP
#include<bits/stdc++.h>
using namespace std;
#include <string>
#include "operations/IOperation.hpp"

class OperationFactory {
public:
    static IOperation* createOperation(const string& type);
};

#endif