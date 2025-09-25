#include "OperationFactory.hpp"
#include "operations/SqrtOperation.hpp"
#include "operations/FactorialOperation.hpp"
#include "operations/LnOperation.hpp"
#include "operations/PowerOperation.hpp"

IOperation* OperationFactory::createOperation(const std::string& type) {
    if(type == "sqrt") return new SqrtOperation();
    else if(type == "fact") return new FactorialOperation();
    else if(type == "ln") return new LnOperation();
    else if(type == "pow") return new PowerOperation();
    return nullptr;
}