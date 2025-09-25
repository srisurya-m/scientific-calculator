cmake_minimum_required(VERSION 3.10)
project(ScientificCalculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Source files
set(SOURCES
    main.cpp
    facade/CalculatorFacade.cpp
    factory/OperationFactory.cpp
    manager/OperationManager.cpp
    operations/FactorialOperation.cpp
    operations/LnOperation.cpp
    operations/PowerOperation.cpp
    operations/SqrtOperation.cpp
)

# Create executable
add_executable(calculator ${SOURCES})

enable_testing()

add_executable(runTests
    tests/test_calculator.cpp
    facade/CalculatorFacade.cpp
    factory/OperationFactory.cpp
    manager/OperationManager.cpp
    operations/SqrtOperation.cpp
    operations/FactorialOperation.cpp
    operations/LnOperation.cpp
    operations/PowerOperation.cpp
)

target_link_libraries(runTests gtest gtest_main pthread)

add_test(NAME CalculatorTests COMMAND runTests)
