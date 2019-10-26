#ifndef POPULATION_H
#define POPULATION_H
#include <iostream>
#include "fish.h"

class Population{
    
private:
    Fish  * fish= new Fish[1,000,000];
    
public:
    Population(Fish** fish);
    virtual ~Fish();
    
    double add() const;
    double size() const;
    double get() const;
    
};
#endif;
