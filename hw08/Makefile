all: main

main.o: main.cc image.h
	g++ -c -std=c++11 main.cc

image.o: image.cc image.h
	g++ -c -std=c++11 image.cc

main:	image.o main.o
	g++ -o main main.o image.o -ljpeg
