#include "head.h"

int main(){
	
	verbs *cl = new verbs[count_verbs];
	int key;
	
	read(cl);

    do{
		cout << endl << "-----------------------------------" << endl;
        cout << "Enter key's menu";
        cout << endl
			 << "0. Exit" << endl
             << "1. Out all verbs" << endl
             << "2. Found verb in the table" << endl
             << "3. Out the form of verb" << endl
             << "4. Check" << endl
             << "5. What is the verbs?" << endl;
        cin >> key;
        switch(key){
            case 1: system(clear); write_verbs(cl); break;
            case 2: system(clear); break;
            case 3: system(clear);  break;
            case 4: system(clear);  break;
            case 5: system(clear);  break;
            case 0: return EXIT_SUCCESS;
            default: system(clear); cout << "Incrorrect key!!!" << endl; break;
        }
    }while(true);

    return 0;
}