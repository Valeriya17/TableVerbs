all: read.o main.o
	g++ -o tableverbs obj/read.o obj/main.o

main.o: src/main.cpp
	g++ -o obj/main.o -c src/main.cpp

read.o: src/read.cpp
	g++ -o obj/read.o -c src/read.cpp
