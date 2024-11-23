#include <iostream>
#include "enums.h"
#include "Child.h"
#include "Adult.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");

	Child child("Wolf", "Putilov", 14, 50, 1.6, "Kennels");
	Child* child1 = new Child("Alexander", "Mansurov", 18, 68, 1.85, "RKSI");

	Adult adult("Anastasia", "Mamedova", 20, 60, 1.85, "School");
	Adult* adult1 = new Adult("Vladlen", "Tatarskiy", 40, 80, 1.85, "Voenсor");
	
	IHuman** peoples = new IHuman * [4] {child1, & child, adult1, & adult};

	char action = '5';
	while (action != '0') {
		cout << "Выберите человека: 1 - Alexander; 2 - Wolf; 3 - Vladlen; 4 - Anastasia; 5 - выбор всех: ";
		cin >> action;

		switch (action) {
		case '1':
			peoples[0]->display();
			break;
		case '2':
			peoples[1]->display();
			break;
		case '3':
			peoples[2]->display();
			break;
		case '4':
			peoples[3]->display();
			break;
		case '5':
			for (int i = 0; i < 4; ++i) {
				peoples[i]->display();
			}
			break;
		default:
			action = '0';
			break;
		}
		cout << endl;
	}

	delete child1;
	delete adult1;

	return 0;
}