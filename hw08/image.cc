#include <utility>
#inclue <iostream>
#include "image.h"

void readPPM(FILE* fileName)
{
    fileName= fopen("ppm.txt","rb");
    
    char pSix[3];
    fscanf(fileName,"%s\n", pSix);
    fscanf(fileName,"%d\n %d\n",&width,&height);
    fscanf(fileName,"%d\n", max);
    
    unsigned char* pixel=  new unsigned char[3 * *width * *height];
    fread(pixel, sizeof(pixel),3 * *width * *height,fileName);
    fclose(fileName);
    return pixel;
}
void write_jpeg_file(char *filename)

{
    struct jpeg_compress_struct cinfo;
    struct jpeg_error_mgr jerr;
    
    JSAMPROW row_pointer[1];
    FILE *outfile = fopen( filename, "wb" );
    
    if ( !outfile )
    {
        printf("Error opening output jpeg file %s\n!", filename );
        return -1;
    }
    cinfo.err = jpeg_std_error( &jerr );
    jpeg_create_compress(&cinfo);
    jpeg_stdio_dest(&cinfo, outfile);
    
    
    cinfo.image_width = width;
    cinfo.image_height = height;
    cinfo.input_components = 3;
    cinfo.in_color_space = JCS_RGB;
    
    jpeg_set_defaults( &cinfo );
    
    jpeg_start_compress( &cinfo, TRUE );
    
    while( cinfo.next_scanline < cinfo.image_height )
    {
        row_pointer[0] = &pixel[ cinfo.next_scanline * cinfo.image_width *  cinfo.input_components];
        jpeg_write_scanlines( &cinfo, row_pointer, 1 );
    }
    
    jpeg_finish_compress( &cinfo );
    jpeg_destroy_compress( &cinfo );
    fclose( outfile );
    
    return 1;
}


    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
