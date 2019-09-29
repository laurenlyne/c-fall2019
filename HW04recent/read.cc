#include<stdio.h>
#include "function.h"

unsigned char* readPPM(const char* fileName,int* width, int* height, int* max)
{
FILE* fp = fopen("ppm.txt","rb");
    
    char pSix[3];
    fscanf(fp,"%s\n", pSix);
    fscanf(fp,"%d\n %d\n",width,height);
    fscanf(fp,"%d\n", max);
    
    
    int** pixel = new int*[*height];
    pixel[0] = new int[*width * *height];
    for(int j=1; j<*height; j++)
    {
        pixel[j]=array[j-1]+*width;
    }
    
    fread(pixel, sizeof(pixel),3 * *width * *height,fp);
    fclose(fp);
    return pixel;
}

