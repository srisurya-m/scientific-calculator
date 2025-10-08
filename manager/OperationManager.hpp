#ifndef OPERATIONMANAGER_HPP
#define OPERATIONMANAGER_HPP

#include "operations/IOperation.hpp"
#include<bits/stdc++.h>
using namespace std;

class OperationManager {
private:
    static OperationManager* instance;
    IOperation* currentOp;
    OperationManager();

public:
    static OperationManager* getInstance();
    void setOperation(IOperation* op);
    double execute(double a, double b = 0);
    
    // Delete copy constructor and assignment operator
    OperationManager(const OperationManager&) = delete;
    OperationManager& operator=(const OperationManager&) = delete;
};

#endif