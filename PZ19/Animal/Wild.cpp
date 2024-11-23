#include <iostream>
#include "Wild.h"

using namespace std;


// конструкторы

Wild::Wild() {
	this->setName("-");
	this->setSpecies("-");
	this->setColor("-");
	this->setAge(0);
	this->setWeight(0);
	this->_habitat = "-";
}

// список инициализации

Wild::Wild(string name, string species, string color, int age, double weight, string habitat) :
	IAnimal(name, species, color, age, weight),
	_habitat(habitat) {}

// делегирование конструкторов

Wild::Wild(string name, string species, string color, int age, double weight) : IAnimal(name, species, color, age, weight),
_habitat("-") {}
Wild::Wild(string name, string species, string color, int age) : IAnimal(name, species, color, age, 0),
_habitat("-") {}
Wild::Wild(string name, string species, string color) : IAnimal(name, species, color, 0, 0),
_habitat("-") {}
Wild::Wild(string name, string species) : IAnimal(name, species, "-", 0, 0),
_habitat("-") {}
Wild::Wild(string name) : IAnimal(name, "-", "-", 0, 0),
_habitat("-") {}

Wild::~Wild() {}



ostream& operator<<(ostream& output, Wild instance) {
	output << "Кличка: " << instance.getName()
		<< "; Порода: " << instance.getSpecies()
		<< "; Цвет: " << instance.getColor()
		<< "; Возраст: " << instance.getAge()
		<< "; Вес: " << instance.getWeight() << " кг" << endl;
	return output;
}


void Wild::setHabitat(string habitat) {
	this->_habitat = habitat;
}


string Wild::getHabitat() {
	return this->_habitat;
}


void Wild::display()
{
	IAnimal::display();
	cout << "Среда обитания: " << _habitat << endl;
}