#include "CalculatorFacade.hpp"
#include "factory/OperationFactory.hpp"
#include "manager/OperationManager.hpp"
#include<bits/stdc++.h>
using namespace std;

CalculatorFacade::CalculatorFacade() {
    manager = OperationManager::getInstance();
}

double CalculatorFacade::perform(const string& type, double a, double b) {
    IOperation* op = OperationFactory::createOperation(type);
    if (!op) 
        return 0; // Handle null operation
    
    manager->setOperation(op);
    double result = manager->execute(a, b);
    delete op;
    return result;
}