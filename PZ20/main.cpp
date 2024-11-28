#include <iostream>
#include <fstream>
#include "Teen.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int countObj;
	cout << "Введите количество объектов для создания: ";
	cin >> countObj;
	IHuman** peoples = new IHuman * [countObj];

	int objType;
	for (int i = 0; i < countObj; ++i) {
		cout << "Выберите тип: [1 - Child; 2 - Adult; 3 - Teen]: ";
		cin >> objType;

		switch (objType) {
		case 1:
			peoples[i] = new Child;
			break;
		case 2:
			peoples[i] = new Adult;
			break;
		case 3:
			peoples[i] = new Teen;
			break;
		default:
			break;
		}

		peoples[i]->readFromConsole();
	}

	ofstream out("Peolpes.txt", ios::out | ios::trunc);

	for (int i = 0; i < countObj; ++i) {
		peoples[i]->display();
		peoples[i]->writeToFile();
		cout << peoples[i]->getFirstName() << " " << peoples[i]->getLastName() << " был сохранён в файл!" << endl;
	}
	delete peoples;

	return 0;
}