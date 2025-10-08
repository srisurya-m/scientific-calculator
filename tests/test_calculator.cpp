#include <gtest/gtest.h>
#include "../facade/CalculatorFacade.hpp"
#include<bits/stdc++.h>
using namespace std;

TEST(CalculatorTests, SqrtOperation) {
    CalculatorFacade calc;
    EXPECT_DOUBLE_EQ(calc.perform("sqrt", 16), 4.0);
}

TEST(CalculatorTests, FactorialOperation) {
    CalculatorFacade calc;
    EXPECT_DOUBLE_EQ(calc.perform("fact", 5), 120.0);
}

TEST(CalculatorTests, PowerOperation) {
    CalculatorFacade calc;
    EXPECT_DOUBLE_EQ(calc.perform("pow", 2, 8), 256.0);
}

TEST(CalculatorTests, LnOperation) {
    CalculatorFacade calc;
    EXPECT_NEAR(calc.perform("ln", 10), 2.30258509299, 1e-9);  
}
