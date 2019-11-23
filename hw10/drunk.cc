#include "drunk.h"
#include "fish.h"
#include <iostream>

Drunk::Drunk( double x, double y, double speed)
:Fish(x,y,speed)
{
}
Drunk:: ~Drunk(){
    
}
void Drunk::swim() {
    int choice = rand() % 4;
    if(     choice == 0) x += speed;
    else if(choice == 1) y += speed;
    else if(choice == 2) x -= speed;
    else                 y -= speed;
    
}

