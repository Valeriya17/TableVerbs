#include "head.h"

// Записываем в массив структор глаголы(инф, прош, парт2)
void read(verbs *cl) {
	ifstream fin("data/verb.txt");
	
	int i = 0;
	while(!fin.eof()) {
		fin >> cl[i].infin;
		fin >> cl[i].past;
		fin >> cl[i].part2;
		i++;
	}

	fin.close();
}

// Question 1

// Вывод всей таблицы
void write_verbs(verbs *cl) {
	
	 for (int i = 0; i < count_verbs; i++) {
		cout << setw(15) << cl[i].infin << setw(15) << cl[i].past
			 << setw(15) << cl[i].part2 << endl;
	}
	
}
