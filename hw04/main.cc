#include<stdio.h>
#include "function.h"

int main() {
    char fileName[50]= "test.ppm";
    int width =0;
    int height=0;
    int size=width*height;
    int max =255;
    char pSix[5]="P6";
    unsigned char* pixel[size] = readPPM(fileName, pSix, &width, &height, &max);
    unsigned char* pixel[size] = writePPM(fileName, pSix, &width, &height, &max);
    for(int i=0; i<sizeof(pixel);i++){
        printf("%s\n", pixel[i]);
    }
}



