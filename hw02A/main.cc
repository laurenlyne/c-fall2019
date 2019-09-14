#include <cstdio>

int main(int argc, char** argv)
{
    FILE* fp =fopen("hw02.txt","r");
    int value =0;
    fscanf(fp,"%d",&value);
    
    fopen("hw02.txt","w");
    fprintf(fp,"%d",value++);
    
    fclose(fp);
   
    printf("%c",value);
}

