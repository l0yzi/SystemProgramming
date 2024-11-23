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
	IAnimal(name, species, color, age, weight),
	_owner(owner) {}

Pet::Pet(string name, string species, string color, int age, double weight) : IAnimal(name, species, color, age, weight),
_owner("-") {}
Pet::Pet(string name, string species, string color, int age) : IAnimal(name, species, color, age, 0),
_owner("-") {}
Pet::Pet(string name, string species, string color) : IAnimal(name, species, color, 0, 0),
_owner("-") {}
Pet::Pet(string name, string species) : IAnimal(name, species, "-", 0, 0),
_owner("-") {}
Pet::Pet(string name) : IAnimal(name, "-", "-", 0, 0),
_owner("-") {}

Pet::~Pet() {} //дестр

ostream& operator<<(ostream& output, Pet instance) {
	output << "Кличка: " << instance.getName()
		<< "; Порода: " << instance.getSpecies()
		<< "; Цвет: " << instance.getColor()
		<< "; Возраст: " << instance.getAge()
		<< "; Вес: " << instance.getWeight() << " кг" << endl;
	return output;
}



void Pet::setOwner(string owner) {
	this->_owner = owner;
}

string Pet::getOwner() {
	return this->_owner;
}


void Pet::display()
{
	IAnimal::display();
	std::cout << "Хозяин: " << _owner << std::endl;
}