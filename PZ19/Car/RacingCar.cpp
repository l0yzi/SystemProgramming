
#include <iostream>
#include "RacingCar.h"

using namespace std;

RacingCar::RacingCar() {
	this->setBrand("-");
	this->setColor("-");
	this->setBodyType("-");
	this->setEngineVolume(0);
	this->setMileage(0);
	this->_hasCarburetor = false;
}

RacingCar::RacingCar(string brend, string color, string bodyType, double motorCapacity, int mileage, bool hasCarburetor) :
	ICar(brend, color, bodyType, motorCapacity, mileage),
	_hasCarburetor(hasCarburetor) {}

RacingCar::RacingCar(string brend, string color, string bodyType, double motorCapacity, int mileage) : ICar(brend, color, bodyType, motorCapacity, mileage),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend, string color, string bodyType, double motorCapacity) : ICar(brend, color, bodyType, motorCapacity, 0),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend, string color, string bodyType) : ICar(brend, color, bodyType, 0, 0),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend, string color) : ICar(brend, color, "-", 0, 0),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend) : ICar(brend, "-", "-", 0, 0),
_hasCarburetor(false) {}

RacingCar::~RacingCar() {}


ostream& operator<<(ostream& output, RacingCar instance) {
	output << "Марка: " << instance.getBrand()
		<< "; Цвет: " << instance.getColor()
		<< "; Тип Кузова: " << instance.getBodyType()
		<< "; Объём двигателя: " << instance.getEngineVolume()
		<< "; Пробег: " << instance.getMileage() << endl;
	return output;
}


void RacingCar::setHasCarburetor(bool hasCarburetor) {
	this->_hasCarburetor = hasCarburetor;
}

bool RacingCar::getHasCarburetor() {
	return this->_hasCarburetor;
}

void RacingCar::display() {
	ICar::display();
	cout << "Есть карбюратор: " << boolalpha << this->_hasCarburetor << endl;
}

