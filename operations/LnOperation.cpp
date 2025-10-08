#include "LnOperation.hpp"
#include<bits/stdc++.h>
using namespace std;

double LnOperation::execute(double a, double b) {
    if(a <= 0) 
        return -1; // invalid
    
    return log(a);
}