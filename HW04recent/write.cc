#include<stdio.h>
#include "function.h"

unsigned char* writePPM(const char* fileName, int* width, int* height, int* max){

    FILE* fl = fopen("ppm.txt","wb");
 
    char pSix[3];
    fprintf(fl,"%d%\n", pSix);
    fprintf(fl,"%d\n", width);
    fprintf(fl,"%d\n", height);
    fprintf(fl,"%d\n", max);
    
    int** pixel = new int*[*height];
    pixel[0] = new int[*width * *height];
    for(int j=1; j<*height; j++)
    {
        pixel[j]=array[j-1]+*width;
    }
   
    fwrite(pixel, sizeof(pixel),3 * *width * *height,fl);
    
    fclose(fl);
    
    return pixel;
}
