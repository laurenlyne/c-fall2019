
#include <iostream>
#include "Angle.h"
#include "fish.h"

int main()
{
    Angle angle1(30.0);
    Angle angle2(60.0);
    Angle resultant = angle1+angle2;
    
    double angleCos = resultant.getCos();
    double angleSin = resultant.getSin();
  //  double speed = resultant.getSpeed();
   // double x = resultant.getX();
   // double y = resultant.get
    
    Angle direction = resultant.getDirection();
    Angle turn = resultant.getTurn();
    
    
    std::cout<<resultant<<std::endl;
    std::cout<<angleCos<<std::endl;
    std::cout<<angleSin<<std::endl;
    

   
}

