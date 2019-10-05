#include<stdio.h>
#include "function.h"

unsigned char* readPPM(const char* fileName,int* width, int* height, int* max)
{
    FILE* fp = fopen("ppm.txt","rb");
    
    char pSix[3];
    fscanf(fp,"%s\n", pSix);
    fscanf(fp,"%d\n %d\n",width,height);
    fscanf(fp,"%d\n", max);
    
    unsigned char* pixel=  new unsigned char[3 * *width * *height];
    fread(pixel, sizeof(pixel),3 * *width * *height,fp);
    fclose(fp);
    return pixel;
    }
