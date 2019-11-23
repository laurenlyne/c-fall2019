#include <vector>
#include <iostream>
#include "fish.h"
#include "flippy.h"
#include "drunk.h"

int main(int argc, char** argv){
    std::vector<Fish*> populations;
    
    for(int i=0; i<100; i++){
        Fish* f= new Flippy(2.0, 3.0, 4.0, 5.0, 6.0);
        Fish* d = new Drunk(4.0, 5.0, 6.0);
        populations.push_back(d); //Adding new fish populations
        populations.push_back(f);
    }
        while(populations.size()>0){
        for(int i=0; i<populations.size();i++){
           // std::cout<<"i="<<i<<std::endl;
            Fish* fish = populations[i];
            fish->swim();
            if(fish->getX()>100 && fish->getY()<100){                  //Erasing fish less than 4
                populations.erase(populations.begin()+i);
                i--;
                std::cout<<"Fish erased"<<std::endl;
            }
        //if(x>100 && y<100){                 //Adding fish greater than 4
      //      populations.insert(populations.begin()+i);
     //       i--;
     //   }
       }
        
   }
        
}

