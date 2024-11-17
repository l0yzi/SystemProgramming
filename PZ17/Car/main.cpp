#include <iostream>
#include "enums.h"
#include "RacingCar.h"
#include "Truck.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << endl;

	Car* car1 = new Car("Renault", "Red", "sedan", 1.5, mileageCategory::Mileage::Old);
	cout << *car1;
	delete car1;

	RacingCar racingCar("McLaren", "Yellow", "sedan", 4.5, 160000, true);
	racingCar.displayRacingCar();
	

	Truck truckCar1("Belaz", "Orange-Black", "-", 12.4, 150000, true);
	truckCar1.displayTruck();
	return 0;
}