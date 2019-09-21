
unasigned char readPPM(const char* fileName,const char* pSix,int* width, int* height, int* max);
{
FILE* fp = fopen("ppm.txt","rb");

    fscanf(fp,"%s", pSix)
    
    if(strncmp(pSix,"P6", 10)==0)
    {
        printf("Correct P6 format\n");
    }
    else{
        printf("Incorrect P6 format\n");
    }
    
    fscanf(fr,"%d\n %d\n",width,height);
    fscanf(fr,"%d\n", max);
    
    
    unsigned char* pixel = new unsigned char[width*height];
    
    fread(pixel, sizeof(pixel),3*width*heigth,fr);
    fclose(fp);
    return pixel;
}

