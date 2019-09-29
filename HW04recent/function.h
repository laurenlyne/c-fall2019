#ifndef FUNCTION_H
#define FUNCTION_H

unsigned char* readPPM(const char* fileName,int* width, int* height, int* max);
unsigned char* writePPM(const char* fileName, int* width, int* height, int* max);

#endif
