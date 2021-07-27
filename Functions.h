#pragma once
#include <math.h>
class Functions{
public:
    static double squareRoot(const double a) {
        double b = sqrt(a);
        if(b != b) { // nan check
            return -1.0;
        }else{
            return sqrt(a);
        }
    }

    static int addInt(const int a, const int b){
        return a+b;
    }
};