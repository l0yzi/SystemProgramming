#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck() {
	this->setBrand("-");
	this->setColor("-");
	this->setBodyType("-");
	this->setEngineVolume(0);
	this->setMileage(0);
	this->_hasTrailer = false;
}

Truck::Truck(string brend, string color, string bodyType, double motorCapacity, int mileage, bool hasTrailer) :
	Car(brend, color, bodyType, motorCapacity, mileage),
	_hasTrailer(hasTrailer) {}

Truck::Truck(string brend, string color, string bodyType, double motorCapacity, int mileage) : Car(brend, color, bodyType, motorCapacity, mileage),
_hasTrailer(false) {}
Truck::Truck(string brend, string color, string bodyType, double motorCapacity) : Car(brend, color, bodyType, motorCapacity, 0),
_hasTrailer(false) {}
Truck::Truck(string brend, string color, string bodyType) : Car(brend, color, bodyType, 0, 0),
_hasTrailer(false) {}
Truck::Truck(string brend, string color) : Car(brend, color, "-", 0, 0),
_hasTrailer(false) {}
Truck::Truck(string brend) : Car(brend, "-", "-", 0, 0),
_hasTrailer(false) {}


void Truck::setHasTrailer(bool hasTrailer) {
	this->_hasTrailer = hasTrailer;
}

bool Truck::getHasTrailer() {
	return this->_hasTrailer;
}

void Truck::displayTruck() {
	cout << "Truck: " << this->getBrand()
		<< " | Color: " << this->getColor()
		<< " | BodyType: " << this->getBodyType()
		<< " | MotorCapacity: " << this->getEngineVolume()
		<< " | Mileage: " << this->getMileage()
		<< " | HasTrailer: " << boolalpha << this->_hasTrailer << endl;
}