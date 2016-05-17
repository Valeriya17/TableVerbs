void found_form(verbs *cl){
	string buff;
	cout << "Enter search verb: ";
	cin >> buff;
	int kind_verb;

	for(int i = 0; i < count_verbs; i++){
		if(cl[i].infin == buff){
			do{
				cout << "What kind of verb: ";
				cin >> kind_verb;
			}while(!(kind_verb <= 3 && kind_verb >= 1));

			cout << "Veiw form verb: ";

			if(kind_verb == 1) cout << cl[i].infin << endl;
			else if(kind_verb == 2) cout << cl[i].past << endl;
			else cout << cl[i].part2 << endl;

			return;
		}
	}

	cout << endl << "Incorrect verb" << endl;
}
