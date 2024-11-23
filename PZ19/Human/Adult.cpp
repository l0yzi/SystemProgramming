#include <iostream>
#include "Adult.h"

using namespace std;

Adult::Adult() {
	this->setFirstName("-");
	this->setLastName("-");
	this->setAge(0);
	this->setWeight(0);
	this->setHeight(0);
	this->_workPlace = "-";
}

Adult::Adult(string firstName, string lastName, int age, double weight, double height, string workPlace) :
	IHuman(firstName, lastName, age, weight, height), _workPlace(workPlace) {}

Adult::Adult(string firstName, string lastName, int age, double weight, double height) : IHuman(firstName, lastName, age, weight, height), _workPlace("-") {}
Adult::Adult(string firstName, string lastName, int age, double weight) : IHuman(firstName, lastName, age, weight, 0), _workPlace("-") {}
Adult::Adult(string firstName, string lastName, int age) : IHuman(firstName, lastName, age, 0, 0), _workPlace("-") {}
Adult::Adult(string firstName, string lastName) : IHuman(firstName, lastName, 0, 0, 0), _workPlace("-") {}
Adult::Adult(string firstName) : IHuman(firstName, "-", 0, 0, 0), _workPlace("-") {}
Adult::~Adult() {};

bool Adult::operator>(Adult other) {
	return this->getHeight() > other.getHeight();
}
bool Adult::operator<(Adult other) {
	return this->getHeight() < other.getHeight();
}

ostream& operator<<(ostream& output, Adult instance) {
	output << "Adult: " << instance.getFirstName() << " " << instance.getLastName()
		<< " | Возраст: " << instance.getAge()
		<< " | Вес: " << instance.getWeight()
		<< " | Рост: " << instance.getHeight()
		<< " | Место работы: " << instance._workPlace << endl;
	return output;
}


void Adult::setWorkPlace(string workPlace) {
	this->_workPlace = workPlace;
}

string Adult::getWorkPlace() {
	return _workPlace;
}

void Adult::display() {
	IHuman::display();
	cout << "Место работы: " << this->_workPlace << endl;
}