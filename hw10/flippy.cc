#include "Angle.h"
#include <iostream>
#include "flippy.h"


Flippy::Flippy(double turn, double direction, double x, double y, double speed)
:Fish(x,y,speed),
turn(turn), direction(direction)
{
    
}
Flippy:: ~Flippy()
{
    
}
void Flippy:: swim() {
    int choice = rand() % 3;
    if(choice == 0) direction -= turn;
    else if(choice == 2) direction += turn;
    x += speed * direction.getCos();
    y += speed * direction.getSin();
}

