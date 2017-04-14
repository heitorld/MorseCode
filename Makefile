all: morse

hello: main.o morse.o
	g++ -o morse -std=gnu++11 -Wall -ansi -pedantic -O0 -g main.o morse.o


main.o: main.cpp
	g++ -c main.cpp

morse.o: morse.cpp
	g++ -c morse.cpp

clean:
	rm *o hello

