#include<stdio.h>
#include "function.h"

int main() {
    const char* fileName = "test.ppm";
    int width =0;
    int height=0;
    int size=width*height;
    int max =255;
    unsigned char* pixel= readPPM(fileName, &width, &height, &max);
 

}



