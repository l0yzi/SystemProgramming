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
	ICar(brend, color, bodyType, motorCapacity, mileage),
	_hasTrailer(hasTrailer) {}

Truck::Truck(string brend, string color, string bodyType, double motorCapacity, int mileage) : ICar(brend, color, bodyType, motorCapacity, mileage),
_hasTrailer(false) {}
Truck::Truck(string brend, string color, string bodyType, double motorCapacity) : ICar(brend, color, bodyType, motorCapacity, 0),
_hasTrailer(false) {}
Truck::Truck(string brend, string color, string bodyType) : ICar(brend, color, bodyType, 0, 0),
_hasTrailer(false) {}
Truck::Truck(string brend, string color) : ICar(brend, color, "-", 0, 0),
_hasTrailer(false) {}
Truck::Truck(string brend) : ICar(brend, "-", "-", 0, 0),
_hasTrailer(false) {}

Truck::~Truck() {}

ostream& operator<<(ostream& output, Truck instance) {
	output << "Марка: " << instance.getBrand()
		<< "; Цвет: " << instance.getColor()
		<< "; Тип Кузова: " << instance.getBodyType()
		<< "; Объём двигателя: " << instance.getEngineVolume()
		<< "; Пробег: " << instance.getMileage() << endl;
	return output;
}

void Truck::setHasTrailer(bool hasTrailer) {
	this->_hasTrailer = hasTrailer;
}

bool Truck::getHasTrailer() {
	return this->_hasTrailer;
}

void Truck::display() {
	ICar::display();
	std::cout << "Есть прицеп: " << boolalpha << this->_hasTrailer << endl;
		
}
