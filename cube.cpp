#include <iostream>
#include "cube.h"
double cube::getVolume()
{
    return length_ * length_ *length_ ;
}

double cube::getSA()
{
    return 6*length_ *length_ ;
}

void cube::setLength(double len)
{
    length_ = len ;
}

int main(){
    cube c;

    c.setLength(3.48);
    double vol = c.getVolume();
    std::cout<<"Volume is "<<vol<<std::endl;

    return 0;
}