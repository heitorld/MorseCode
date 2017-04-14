all: morse

morse: main.cpp morse.cpp
	g++ -o morse -std=gnu++11 -Wall -ansi -pedantic -O0 -g main.cpp morse.cpp


main.o: main.cpp
	g++ -c main.cpp

morse.o: morse.cpp
	g++ -c morse.cpp

clean:
	rm *o morse

