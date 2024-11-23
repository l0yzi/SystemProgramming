#include <iostream>
#include "enums.h"
#include "Truck.h"
#include "RacingCar.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	RacingCar* racingCar1 = new RacingCar("McLaren", "Yellow", "sedan", 4.5, 160000, true);
	RacingCar racingCar2("Lamborghini", "Green", "sedan", 9.5, 152000, true);
	Truck* truckCar1 = new Truck("Foton", "White", "-", 124.4, 1120000, true);
	Truck truckCar2("Belaz", "Orange-Black", "-", 12.4, 150000, true);

	ICar** cars = new ICar * [4] {racingCar1, & racingCar2, truckCar1, & truckCar2};

	char action = '5';
	while (action != '0') {
		cout << "Выберите машину: 1 - McLaren; 2 - Lamborghini; 3 - Foron; 4 - Belaz; 5 - все вместе: ";
		cin >> action;

		switch (action) {
		case '1':
			cars[0]->display();
			break;
		case '2':
			cars[1]->display();
			break;
		case '3':
			cars[2]->display();
			break;
		case '4':
			cars[3]->display();
			break;
		case '5':
			for (int i = 0; i < 4; ++i) {
				cars[i]->display();
			}
			break;
		default:
			action = '0';
			break;
		}
		cout << endl;
	}

	delete truckCar1;
	delete racingCar1;
	return 0;
}