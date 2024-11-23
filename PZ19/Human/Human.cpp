#define CURRENT_YEAR 2024
#include <iostream>
#include "Human.h"
using namespace std;

int check::CheckNum(int num) {
	if (num < 0) {
		cout << "Ошибка. Введите корректные данные!" << endl;
		return 0;
	}
	return num;
}
double check::CheckNum(double num) {
	if (num < 0) {
		cout << "Ошибка. Введите корректные данные!" << endl;
		return 0;
	}
	return num;
}
string check::CheckAlpha(string str) {
	for (int i = 0; i < str.length(); ++i) {
		if (!isalpha(str.at(i)) && !ispunct(str.at(i))) {
			cout << "Ошибка. Введите корректные данные!" << endl;
			return "-";
		}
	}
	return str;
}


IHuman::IHuman() { this->_firstName = "Indefinite"; this->_lastName = "Indefinite"; this->_age = 0; this->_weight = 0; this->_height = 0; }

IHuman::IHuman(string firstName, string lastName, int age, double weight, double height) : _firstName(check::CheckAlpha(firstName)),
_lastName(check::CheckAlpha(lastName)), _age(check::CheckNum(age)), _weight(check::CheckNum(weight)),
_height(check::CheckNum(height)) {}

//IHuman::IHuman(string firstName, string lastName, int age, double weight) : IHuman(firstName, lastName, age, weight, 0) {}
//IHuman::IHuman(string firstName, string lastName, int age) : IHuman(firstName, lastName, age, 0, 0) {}
//IHuman::IHuman(string firstName, string lastName) : IHuman(firstName, lastName, 0, 0, 0) {}
//IHuman::IHuman(string firstName) : IHuman(firstName, "-", 0, 0, 0) {}

IHuman::~IHuman() {}

void IHuman::setFirstName(string firstName) {
	this->_firstName = firstName;
}

void IHuman::setLastName(string lastName) {
	this->_lastName = lastName;
}

void IHuman::setAge(int age) {
	if (check::CheckNum(age) == 0) {
		return;
	}
	this->_age = age;
}

void IHuman::setWeight(double weight) {
	if (check::CheckNum(weight) == 0) {
		return;
	}
	this->_weight = weight;
}

void IHuman::setHeight(double height) {
	if (check::CheckNum(height) == 0) {
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

double IHuman::calculateBMI() {
	return _weight / (_height * _height);
}

int IHuman::Year() {
	return CURRENT_YEAR - _age;
}

void IHuman::display() {
	cout << "Имя + Фамилия: " << _firstName << " " << _lastName
		<< "; Возраст: " << _age
		<< "; Вес: " << _weight
		<< "; Рост: " << _height << endl;
}