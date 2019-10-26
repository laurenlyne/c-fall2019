all: main

main.o: main.cc Angle.h
	g++ -c -std=c++11 main.cc

angle.o: angle.cc Angle.h
	g++ -c -std=c++11 angle.cc

fish.o: fish.cc Angle.h fish.h
	g++ -c -std=c++11 fish.cc

main: fish.o angle.o main.o
	g++ -o main main.o angle.o fish.o