
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
	Car(brend, color, bodyType, motorCapacity, mileage),
	_hasCarburetor(hasCarburetor) {}

RacingCar::RacingCar(string brend, string color, string bodyType, double motorCapacity, int mileage) : Car(brend, color, bodyType, motorCapacity, mileage),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend, string color, string bodyType, double motorCapacity) : Car(brend, color, bodyType, motorCapacity, 0),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend, string color, string bodyType) : Car(brend, color, bodyType, 0, 0),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend, string color) : Car(brend, color, "-", 0, 0),
_hasCarburetor(false) {}
RacingCar::RacingCar(string brend) : Car(brend, "-", "-", 0, 0),
_hasCarburetor(false) {}

void RacingCar::setHasCarburetor(bool hasCarburetor) {
	this->_hasCarburetor = hasCarburetor;
}

bool RacingCar::getHasCarburetor() {
	return this->_hasCarburetor;
}

void RacingCar::displayRacingCar() {
	cout << "Гоночный автомобиль: " << this->getBrand()
		<< "; Цвет: " << this->getColor()
		<< "; Тип кузова: " << this->getBodyType()
		<< "; Объём двигателя: " << this->getEngineVolume()
		<< "; Пробег: " << this->getMileage()
		<< "; Есть карбюратор: " << boolalpha << this->_hasCarburetor << endl;
}