all: main

main.o: main.cc angle.h
	g++ -c -std=c++11 main.cc

angle.o: angle.cc angle.h
	g++ -c -std=c++11 angle.cc

main: angle.o main.o
	g++ -o main main.o angle.o