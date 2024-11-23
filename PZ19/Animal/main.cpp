#include <iostream>
#include "enums.h"
#include "Wild.h"
#include "Pet.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	Pet pet1("Murzick", "cat", "orange", 3, 4, "Andrey Bolkonskiy");
	Pet* pet = new Pet("Hruk", "Pig", "pink", 8, 12, "Andrey Bolkonskiy");
	
	Wild wild("Fubium", "Nosorog", "Gray", 6, 1200, "Savannah");
	Wild* wild1 = new Wild("Baloo", "Bear", "Brown", 9, 210, "Forest");


	IAnimal** animals = new IAnimal *[4] {pet, & pet1, wild1, & wild};

	char action = '5';
	while (action != '0') {
		cout << "Выберите животное: 1 - Pig; 2 - Cat; 3 - Bear; 4 - Nosorog; 5 - выбор всех: ";
		cin >> action;

		switch (action) {
		case '1':
			animals[0]->display();
			break;
		case '2':
			animals[1]->display();
			break;
		case '3':
			animals[2]->display();
			break;
		case '4':
			animals[3]->display();
			break;
		case '5':
			for (int i = 0; i < 4; ++i) {
				animals[i]->display();
			}
			break;
		default:
			action = '0';
			break;
		}
		cout << endl;
	}

	delete wild1;
	delete pet;
	return 0;
}
