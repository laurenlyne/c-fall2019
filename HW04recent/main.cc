#include<stdio.h>
#include "function.h"

int main() {
    char fileName[50]= "test.ppm";
    int width =0;
    int height=0;
    int max =255;
    
    unsigned char* pixel = readPPM(fileName, &width, &height, &max);
    unsigned char* pixels = writePPM(fileName,&width, &height, &max);
    for(int i=0; i<sizeof(pixel);i++){
        printf("%s\n", pixel[i]);
    }
}



