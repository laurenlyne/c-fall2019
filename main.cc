#include<stdio.h>
#include "function.h"

int main() {
    char fileName[50]= "test.ppm";
    int width =0;
    int height=0;
    int size=width*height;
    int max =255;
    char pSix[5]="P6";
    unsigned char* pixel= readPPM(fileName, &width, &height, &max);
 

}



