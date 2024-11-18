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
	Human(firstName, lastName, age, weight, height), _workPlace(workPlace) {}

Adult::Adult(string firstName, string lastName, int age, double weight, double height) : Human(firstName, lastName, age, weight, height), _workPlace("-") {}
Adult::Adult(string firstName, string lastName, int age, double weight) : Human(firstName, lastName, age, weight, 0), _workPlace("-") {}
Adult::Adult(string firstName, string lastName, int age) : Human(firstName, lastName, age, 0, 0), _workPlace("-") {}
Adult::Adult(string firstName, string lastName) : Human(firstName, lastName, 0, 0, 0), _workPlace("-") {}
Adult::Adult(string firstName) : Human(firstName, "-", 0, 0, 0), _workPlace("-") {}
Adult::~Adult() {};

void Adult::setWorkPlace(string workPlace) {
	this->_workPlace = workPlace;
}

string Adult::getWorkPlace() {
	return _workPlace;
}

void Adult::display() {
	Human::display();
	cout << "Ìוסעמ נאבמעû: " << this->_workPlace << endl;
}