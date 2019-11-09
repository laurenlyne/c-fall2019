#include "drunk.h"
#include "fish.h"
#include <iostream>

Drunk::Drunk(double turn, double direction, double x, double y, double speed)
:Fish(x,y,speed),
turn(turn), direction(direction){
}
Drunk:: ~Drunk(){

}
DrunkenFish::swim() {
    int choice = rand() % 4;
    if(     choice == 0) x += speed;
    else if(choice == 1) y += speed;
    else if(choice == 2) x -= speed;
    else                 y -= speed;
}
