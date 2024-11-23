#include <iostream>
#include "Wild.h"

using namespace std;


// ������������

Wild::Wild() {
	this->setName("-");
	this->setSpecies("-");
	this->setColor("-");
	this->setAge(0);
	this->setWeight(0);
	this->_habitat = "-";
}

// ������ �������������

Wild::Wild(string name, string species, string color, int age, double weight, string habitat) :
	IAnimal(name, species, color, age, weight),
	_habitat(habitat) {}

// ������������� �������������

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
	output << "������: " << instance.getName()
		<< "; ������: " << instance.getSpecies()
		<< "; ����: " << instance.getColor()
		<< "; �������: " << instance.getAge()
		<< "; ���: " << instance.getWeight() << " ��" << endl;
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
	cout << "����� ��������: " << _habitat << endl;
}