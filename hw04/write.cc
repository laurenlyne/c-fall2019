void writePPM(const char* fileName,const char* pSix,int* width, int* height, int* max){

    FILE* fl = fopen("ppm.txt","wb");
 
    fprintf(fl,"%s\n",pSix);
    fprintf(fl,"%s\n",*width);
    fprintf(fl,"%s\n",*height);
    fprintf(fl,"%s\n",*max);
    
    unsigned char* pixel = new unsigned char[width*height];
   
    fwrite(pixel, sizeof(pixel),3*width*heigth,fr);
    
    fclose(fl);
    
    return pixel;
}
