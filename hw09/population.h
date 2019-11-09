#ifndef POPULATION_H
#define POPULATION_H
#include <iostream>
#include "fish.h"

class Population{
    
private:
    Fish ** fish = new Fish*[1000000];
public:
    Population(Fish** fish);
    virtual ~Fish();
    
    void add() const; //take pointer to fish as argument
    int size() const;
    Fish* get() const; //integer index
    void remove() const; //pointer to a fish as argument
    
};
#endif;

