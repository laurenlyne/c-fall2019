all: main

main.o: main.cc Angle.h drunk.h flippy.h fish.h
	g++ -c -std=c++11 main.cc

fish.o: fish.cc Angle.h drunk.h flippy.h fish.h
	g++ -c -std=c++11 fish.cc

flippy.o: flippy.cc Angle.h drunk.h flippy.h fish.h
	g++ -c -std=c++11 flippy.cc

drunk.o: drunk.cc Angle.h drunk.h flippy.h fish.h
	g++ -c -std=c++11 drunk.cc

main: drunk.o flippy.o fish.o main.o
	g++ -o main main.o fish.o flippy.o drunk.o 

