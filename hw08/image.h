#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>

class Image{
public:
    void readPPM(FILE* fileName) const;
    void write_jpeg_file(char *filename) const;
private:
    int width =0;
    int height=0;
    unsigned char* p;
    
Image::Image(Image&& t)  //move constructor
    {
        p=t.p;
        t.p=nullptr;
    }
    
Image& operator=(const Image& t) //copy =
    {
        *(this->p)=*(t.part);
    }
 
Image::Image(const Image& t)  //copy constructor
    {
        p =new Part(*(t.p));
    }

Image& operator=(Image&& t)  //move =
    {
        delete p;
        p=t.p;
        t.p=nullptr;
    }
Image::~Image()     //destructor
    {
        delete p;
    }
};
