#ifndef OPERATIONFACTORY_HPP
#define OPERATIONFACTORY_HPP

#include <string>
#include "operations/IOperation.hpp"

class OperationFactory {
public:
    static IOperation* createOperation(const std::string& type);
};

#endif