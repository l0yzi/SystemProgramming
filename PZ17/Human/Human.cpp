#define CURRENT_YEAR 2024
#include <iostream>
#include "Animal.h"
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


Human::Human() { this->_firstName = "Indefinite"; this->_lastName = "Indefinite"; this->_age = 0; this->_weight = 0; this->_height = 0; }

Human::Human(string firstName, string lastName, int age, double weight, double height) : _firstName(check::CheckAlpha(firstName)),
_lastName(check::CheckAlpha(lastName)), _age(check::CheckNum(age)), _weight(check::CheckNum(weight)),
_height(check::CheckNum(height)) {}

Human::Human(string firstName, string lastName, int age, double weight) : Human(firstName, lastName, age, weight, 0) {}
Human::Human(string firstName, string lastName, int age) : Human(firstName, lastName, age, 0, 0) {}
Human::Human(string firstName, string lastName) : Human(firstName, lastName, 0, 0, 0) {}
Human::Human(string firstName) : Human(firstName, "-", 0, 0, 0) {}

Human::~Human() {}


Human Human::operator++() {
	this->_height += 0.1;
	return *this;
}
Human Human::operator--() {
	if (this->_height - 0.1 < 0) {
		cout << "Нельзя уменьшить рост человека. Рост меньше 0,1 -(" << this->_height << ")" << endl;
	}
	else {
		this->_height -= 0.1;
	}
	return *this;
}

bool Human::operator>(Human other) {
	return this->_height > other._height;
}
bool Human::operator<(Human other) {
	return this->_height < other._height;
}

ostream& operator<<(ostream& output, Human instance) {
	output << "Имя + Фамилия: " << instance._firstName << " " << instance._lastName
		<< "; Возраст: " << instance._age
		<< "; Вес: " << instance._weight
		<< "; Рост: " << instance._height << endl;
	return output;
}



void Human::setFirstName(string firstName) {
	this->_firstName = firstName;
}

void Human::setLastName(string lastName) {
	this->_lastName = lastName;
}

void Human::setAge(int age) {
	if (check::CheckNum(age) == 0) {
		return;
	}
	this->_age = age;
}

void Human::setWeight(double weight) {
	if (check::CheckNum(weight) == 0) {
		return;
	}
	this->_weight = weight;
}

void Human::setHeight(double height) {
	if (check::CheckNum(height) == 0) {
		return;
	}
	this->_height = height;
}



string Human::getFirstName() {
	return this->_firstName;
}

string Human::getLastName() {
	return this->_lastName;
}

int Human::getAge() {
	return this->_age;
}

double Human::getWeight() {
	return this->_weight;
}

double Human::getHeight() {
	return this->_height;
}

double Human::calculateBMI() {
	return _weight / (_height * _height);
}

int Human::Year() {
	return CURRENT_YEAR - _age;
}