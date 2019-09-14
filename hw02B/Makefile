all: main

main.o: main.cc function.h
	g++ -c main.cc

function.o: function.cc function.h
	g++ -c function.cc

main: function.o main.o
	g++ -o main main.o function.o