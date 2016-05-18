double compare_forms(string dest, string buff){
	if(dest == buff) return 1.0;

	int slash = dest.find('/');
	if (slash < 0) return 0;
	string form1_dest = dest.substr(0, slash),
		   form2_dest = dest.substr(slash + 1, dest.size());

	slash = buff.find('/');
	if (slash >= 0) {
		string form1_buff = buff.substr(0, slash),
			   form2_buff = buff.substr(slash + 1, buff.size());

		   if ((form1_buff == form1_dest && form2_buff == form2_dest) ||
			   (form1_buff == form2_dest && form2_buff == form1_dest))
			   return 1.0;
		   if (form1_buff == form1_dest || form2_buff == form1_dest ||
			   form1_buff == form2_dest || form2_buff == form2_dest)
			   return 0.5;

	} else {
		if (buff == form1_dest || buff == form2_dest)
			return 0.5;
	}

	return 0;
}

// Тестирование
void test(verbs *cl){
	srand(time(NULL));

	const int size_test = 10;

	int rand_test_verbs[size_test];
	double result_test = 0.0;
	string buff;

	// Генерируем 10 случайных форм для проверки
	for(int i = 0; i < size_test; i++)
		rand_test_verbs[i] = rand() % count_verbs;

	// Проверка на поиск одинакового рандома
	for(int i = 0; i < size_test; i++)
		for(int j = 0; j < size_test; j++)
			if(rand_test_verbs[i] == rand_test_verbs[j])
				rand_test_verbs[i] = rand() % count_verbs;

	// Проверка знаний
	for(int i = 0; i < size_test; i++){
		cout << endl << setw(2) << i + 1 << ". by 10: " << cl[rand_test_verbs[i]].infin << endl;

		cout << "\tEnter 2 form verb: ";
		cin >> buff;
		result_test += compare_forms(cl[rand_test_verbs[i]].past, buff);

		cout << "\tEnter 3 form verb: ";
		cin >> buff;
		result_test += compare_forms(cl[rand_test_verbs[i]].part2, buff);

	}

	result_test = (result_test / (size_test * 2)) * 100;
	cout << endl << "Result test: " << result_test << "%" << endl;
}