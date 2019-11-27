#include <iostream>
#pragma once
//#pragma once should be in every header file, it tells the compiler to compile the header file only once
class cube{
    public:
        double getVolume();
        double getSA();
        void setLength(double len);
    
    private:
        double length_;
};
//the class always ends with a semicolon