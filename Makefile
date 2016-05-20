all: obj read.o found_verb.o ques3.o ques4.o main.o	
	g++ -o tableverbs obj/read.o obj/ques3.o obj/ques4.o obj/found_verb.o obj/main.o

main.o: src/main.cpp
	g++ -o obj/main.o -c src/main.cpp

read.o: src/read.cpp
	g++ -o obj/read.o -c src/read.cpp

found_verb.o: src/found_verb.cpp
	g++ -o obj/found_verb.o -c src/found_verb.cpp

ques3.o : src/ques3.cpp
	g++ -o obj/ques3.o -c src/ques3.cpp

ques4.o : src/ques4.cpp
	g++ -o obj/ques4.o -c src/ques4.cpp

.PHONY:

obj:
	mkdir obj/
