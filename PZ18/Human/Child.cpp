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
	Human(firstName, lastName, age, weight, height),
	_placeOfStudy(studyPlace) {}

Child::Child(string firstName, string lastName, int age, double weight, double height) : Human(firstName, lastName, age, weight, height), _placeOfStudy("-") {}
Child::Child(string firstName, string lastName, int age, double weight) : Human(firstName, lastName, age, weight, 0), _placeOfStudy("-") {}
Child::Child(string firstName, string lastName, int age) : Human(firstName, lastName, age, 0, 0), _placeOfStudy("-") {}
Child::Child(string firstName, string lastName) : Human(firstName, lastName, 0, 0, 0), _placeOfStudy("-") {}
Child::Child(string firstName) : Human(firstName, "-", 0, 0, 0), _placeOfStudy("-") {}
Child::~Child() {};

void Child::setStudyPlace(string studyPlace) {
	this->_placeOfStudy = studyPlace;
}


string Child::getPlaceOfStudy() {
	return this->_placeOfStudy;
}

void Child::display() {
	Human::display();
	cout << "Где проходит обучение: " << this->_placeOfStudy << endl;
}