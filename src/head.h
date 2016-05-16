#ifndef _HEAD_h_
#define _HEAD_h_

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

const int count_verbs = 295;

#ifdef unix
	#define RESET   "\033[0m"
	#define RED     "\033[1;31m"
	#define YELLOW  "\033[1;33m"
	#define WHITE   "\033[1;37m"
	#define GREEN	"\033[1;32m"
	#define BLUE	"\033[1;34m"
#else
	#define RESET   ""
	#define RED     ""
	#define YELLOW  ""
	#define WHITE   ""
	#define GREEN	""
	#define BLUE	""
#endif

char clear[6];

struct verbs {
    string infin;
    string past;
    string part2;
};

#endif // _HEAD_h_
