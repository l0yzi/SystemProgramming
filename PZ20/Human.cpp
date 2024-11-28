#define CURRENT_YEAR 2024
#include <iostream>
#include "Human.h"

using namespace std;

IHuman::IHuman(string firstName, string lastName, int age, double weight, double height) : _firstName(firstName),
_lastName(lastName), _age(age), _weight(weight), _height(height) {}
IHuman::IHuman() : IHuman("-", "-", 0, 0, 0) {}

IHuman::~IHuman() {}

void IHuman::setFirstName(string firstName) {
	this->_firstName = firstName;
}

void IHuman::setLastName(string lastName) {
	this->_lastName = lastName;
}

void IHuman::setAge(int age) {
	if ((age) == 0) {
		return;
	}
	this->_age = age;
}

void IHuman::setWeight(double weight) {
	if ((weight) == 0) {
		return;
	}
	this->_weight = weight;
}

void IHuman::setHeight(double height) {
	if ((height) == 0) {
		return;
	}
	this->_height = height;
}

string IHuman::getFirstName() {
	return this->_firstName;
}

string IHuman::getLastName() {
	return this->_lastName;
}

int IHuman::getAge() {
	return this->_age;
}

double IHuman::getWeight() {
	return this->_weight;
}

double IHuman::getHeight() {
	return this->_height;
}

void IHuman::readFromConsole() {
	cout << "Введите имя: ";
	cin >> this->_firstName;

	cout << "Введите фамилию: ";
	cin >> this->_lastName;

	cout << "Введите возраст: ";
	cin >> this->_age;

	cout << "Введите вес: ";
	cin >> this->_weight;

	cout << "Введите рост: ";
	cin >> this->_height;
}

void IHuman::writeToFile() {}

void IHuman::display() {
	cout << "IHuman: " << this->_firstName << " " << this->_lastName
		<< "; Возраст: " << this->_age
		<< "; Вес: " << this->_weight
		<< "; Рост: " << this->_height << endl;
}

double IHuman::bodyWeightIndex() {
	return _weight / (_height * _height);
}

int IHuman::bornYear() {
	return CURRENT_YEAR - _age;
}