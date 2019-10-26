#include "Angle.h"
#include <iostream>
#include "fish.h"

Fish::Fish(double x, double y, double speed){
    
    this->x=x;
    this->y=y;
    this->speed=speed;
   
}
Fish::~Fish() {
}

double Fish::getX() const{
    return x;
}
double Fish::getY() const{
    return y;
}
double Fish:: getSpeed() const{
    return speed;
}
void Fish:: swim() const{
    int choice = rand() % 3;
    if(choice == 0) direction -= turn_rate;
    else if(choice == 2) direction += turn_rate;
    x += speed * direction.getCos();
    y += speed * direction.getSin();
}


