all: read.o found_verb.o main.o
	g++ -o tableverbs obj/read.o obj/found_verb.o obj/main.o

main.o: src/main.cpp
	g++ -o obj/main.o -c src/main.cpp

read.o: src/read.cpp
	g++ -o obj/read.o -c src/read.cpp

found_verb.o: src/found_verb.cpp
	g++ -o obj/found_verb.o -c src/found_verb.cpp
