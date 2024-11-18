#include <iostream>
#include "enums.h"
#include "RacingCar.h"
#include "Truck.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	Car car1("Renault", "Red", "sedan", 1.5, mileageCategory::Mileage::Old);

	RacingCar racingCar("McLaren", "Yellow", "sedan", 4.5, 160000, true);
	RacingCar* racingCar1 = new RacingCar("Lamborghini", "Green", "sedan", 9.5, 152000, true);
	
	Truck truckCar("Belaz", "Orange-Black", "-", 12.4, 150000, true);
	Truck* truckCar1 = new Truck("Foton", "White", "-", 124.4, 1120000, true);

	Car** arr = new Car * [5] {&car1, & racingCar, racingCar1, & truckCar, truckCar1};
	for (int i = 0; i < 5; ++i)
	{
		cout << endl;
		arr[i]->display();
		std::cout << "_____________________________________________________________________________________" << std::endl;
	}
	delete racingCar1;
	delete truckCar1;
	delete[] arr;
	return 0;
}