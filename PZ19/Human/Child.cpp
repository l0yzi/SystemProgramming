#include <iostream>
#include "Child.h"

using namespace std;

Child::Child() {
	this->setFirstName("-");
	this->setLastName("-");
	this->setAge(0);
	this->setWeight(0);
	this->setHeight(0);
	this->_placeOfStudy = "-";
}

Child::Child(string firstName, string lastName, int age, double weight, double height, string studyPlace) :
	IHuman(firstName, lastName, age, weight, height),
	_placeOfStudy(studyPlace) {}

Child::Child(string firstName, string lastName, int age, double weight, double height) : IHuman(firstName, lastName, age, weight, height), _placeOfStudy("-") {}
Child::Child(string firstName, string lastName, int age, double weight) : IHuman(firstName, lastName, age, weight, 0), _placeOfStudy("-") {}
Child::Child(string firstName, string lastName, int age) : IHuman(firstName, lastName, age, 0, 0), _placeOfStudy("-") {}
Child::Child(string firstName, string lastName) : IHuman(firstName, lastName, 0, 0, 0), _placeOfStudy("-") {}
Child::Child(string firstName) : IHuman(firstName, "-", 0, 0, 0), _placeOfStudy("-") {}
Child::~Child() {};

Child Child::operator++() {
	this->setHeight(this->getHeight() + 0.1);
	return *this;
}
Child Child::operator--() {
	if (this->getHeight() - 0.1 < 0) {
		cout << "Cannot decrement child height on 0.1. Heigh is less than 0.1 (" << this->getHeight() << ")" << endl;
	}
	else {
		this->setHeight(this->getHeight() - 0.1);
	}
	return *this;
}

bool Child::operator>(Child other) {
	return this->getHeight() > other.getHeight();
}
bool Child::operator<(Child other) {
	return this->getHeight() < other.getHeight();
}

ostream& operator<<(ostream& output, Child instance) {
	output << "Child: " << instance.getFirstName() << " " << instance.getLastName()
		<< " | Возраст: " << instance.getAge()
		<< " | Вес: " << instance.getWeight()
		<< " | Рост: " << instance.getHeight()
		<< " | Место обучения: " << instance._placeOfStudy << endl;
	return output;
}



void Child::setStudyPlace(string studyPlace) {
	this->_placeOfStudy = studyPlace;
}


string Child::getPlaceOfStudy() {
	return this->_placeOfStudy;
}

void Child::display() {
	IHuman::display();
	cout << "Где проходит обучение: " << this->_placeOfStudy << endl;
}