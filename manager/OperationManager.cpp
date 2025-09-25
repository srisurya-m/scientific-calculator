#include "OperationManager.hpp"

OperationManager* OperationManager::instance = nullptr;

OperationManager::OperationManager() : currentOp(nullptr) {}

OperationManager* OperationManager::getInstance() {
    if(instance == nullptr) {
        instance = new OperationManager();
    }
    return instance;
}

void OperationManager::setOperation(IOperation* op) {
    currentOp = op;
}

double OperationManager::execute(double a, double b) {
    if(currentOp) return currentOp->execute(a, b);
    return 0;
}