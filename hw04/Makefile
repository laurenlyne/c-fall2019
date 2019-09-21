all: main

main.o: main.cc function.h
	g++ -c main.cc

read.o: read.cc function.h
	g++ -c read.cc

write.o: write.cc function.h
	g++ -c write.cc
	
main:	read.o write.o main.o
	g++ -o main main.o read.o write.o