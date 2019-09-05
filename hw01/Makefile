all: main


main.o: main.cpp add.h
	g++ -c main.cpp

add.o: add.cpp add.h
	g++ -c add.cpp

main: main.o add.o
	g++ -o main main.o add.o