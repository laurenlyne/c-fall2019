
#include <iostream>
#include "Angle.h"

int main()
{
    Angle angle1(30.0);
    Angle angle2(60.0);
    Angle resultant = angle1+angle2;
    
    std::cout<<angle1<<std::endl;
    std::cout<<angle2<<std::endl;
    std::cout<<resultant<<std::endl;
}

