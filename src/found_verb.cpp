#include "head.h"

// Question 2

// Возвращает 0 в случае, когда buff найдена в dest
int str_slash(string dest, string buff) {
	if(dest == buff) return 0;
	
	int slash;
	
	string str = dest;
	string form1, form2;
	
	slash = str.find('/');
	
	if (slash > 0) {
		form1 = str.substr(0, slash);
		form2 = str.substr(slash + 1, str.size());
		
		if (form1 == buff || form2 == buff) 
			return 0;
		else
			return -1;
	}
	
	return 1;
}

// Поиск глагола и вывод 2)всех форм глагола; 5) Что за форма глагола
void found_verb(verbs *cl, int mod) {
	string buff = ("");
	
	cout << "Enter verb: ";
	cin >> buff;
	for (int i = 0; i < count_verbs; i++) {
		if ((buff == cl[i].infin) || (str_slash(cl[i].past, buff) == 0)
			 || (str_slash(cl[i].part2, buff) == 0)) {
			
			if(mod == 1){
				cout << setw(17) << cl[i].infin << setw(15) << cl[i].past
					<< setw(17) << cl[i].part2 << endl;			
			} else if(mod == 2){
				if(buff == cl[i].infin)
					cout << "Infinitive" << endl;
				if((str_slash(cl[i].past, buff)) == 0)
					cout << "Past simple" << endl;
				if(str_slash(cl[i].part2, buff) == 0)
					cout << "Participle two" << endl;
			}
			
			return;
		}
		
	}
	
	cout << RED << "verb is not founded" << RESET << endl;
}
