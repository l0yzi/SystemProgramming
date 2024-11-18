#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet() {
	this->setName("-");
	this->setSpecies("-");
	this->setColor("-");
	this->setAge(0);
	this->setWeight(0);
	this->_owner = "-";
}

Pet::Pet(string name, string species, string color, int age, double weight, string owner) :
	Animal(name, species, color, age, weight),
	_owner(owner) {}

Pet::Pet(string name, string species, string color, int age, double weight) : Animal(name, species, color, age, weight),
_owner("-") {}
Pet::Pet(string name, string species, string color, int age) : Animal(name, species, color, age, 0),
_owner("-") {}
Pet::Pet(string name, string species, string color) : Animal(name, species, color, 0, 0),
_owner("-") {}
Pet::Pet(string name, string species) : Animal(name, species, "-", 0, 0),
_owner("-") {}
Pet::Pet(string name) : Animal(name, "-", "-", 0, 0),
_owner("-") {}

Pet::~Pet() {} //дестр

void Pet::setOwner(string owner) {
	this->_owner = owner;
}

string Pet::getOwner() {
	return this->_owner;
}


void Pet::display()
{
	Animal::display();
	std::cout << "’оз€ин: " << _owner << std::endl;
}