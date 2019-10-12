#include<stdio.h>
#include "function.h"

unsigned char* readPPM(FILE* fileName,int* width, int* height, int* max)
{
    fileName= fopen("ppm.txt","rb");
    
    char pSix[3];
    fscanf(fileName,"%s\n", pSix);
    fscanf(fileName,"%d\n %d\n",width,height);
    fscanf(fileName,"%d\n", max);
    
    unsigned char* pixel=  new unsigned char[3 * *width * *height];
    fread(pixel, sizeof(pixel),3 * *width * *height,fileName);
    fclose(fileName);
    return pixel;
    }
