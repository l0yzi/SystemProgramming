#include <iostream>
#include "Animal.h"

using namespace std;

//��������
int check::CheckNum(int num) {
	if (num < 0) {
		cout << "������. ������� ���������� ������!" << endl;
		return 0;
	}
	return num;
}
double check::CheckNum(double num) {
	if (num < 0) {
		cout << "������. ������� ���������� ������!" << endl;
		return 0;
	}
	return num;
}
string check::CheckAlpha(string str) {
	for (int i = 0; i < str.length(); ++i) {
		if (!isalpha(str.at(i)) && !ispunct(str.at(i))) {
			cout << "������. ������� ���������� ������!" << endl;
			return "-";
		}
	}
	return str;
}



Animal::Animal() {
	_name = "-"; _species = "-"; _color = "-"; this->_age = 0; _weight = 0;
}


Animal::Animal(string name, string species, string color, int age, double weight) : _name(check::CheckAlpha(name)),
_species(check::CheckAlpha(species)), _color(check::CheckAlpha(color)), _age(check::CheckNum(age)), _weight(check::CheckNum(weight)) {}

Animal::Animal(string name, string species, string color, int age) : Animal(name, species, color, age, 0) {}
Animal::Animal(string name, string species, string color) : Animal(name, species, color, 0, 0) {}
Animal::Animal(string name, string species) : Animal(name, species, "-", 0, 0) {}
Animal::Animal(string name) : Animal(name, "-", "-", 0, 0) {}

Animal::~Animal() {}

ostream& operator<<(ostream& output, Animal instance) {
	output << "���(������): " << instance._name
		<< "; ���: " << instance._species
		<< "; �����: " << instance._color
		<< "; �������: " << instance._age
		<< "; ���: " << instance._weight << " ��" << endl;
	return output;
}


void Animal::setName(string name) {
	this->_name = name;
}

void Animal::setSpecies(string species) {
	this->_species = species;
}

void Animal::setColor(string color) {
	this->_color = color;
}

void Animal::setAge(int age) {
	if (check::CheckNum(age) == 0) {
		return;
	}
	this->_age = age;
}

void Animal::setWeight(double weight) {
	if (check::CheckNum(weight) == 0) {
		return;
	}
	this->_weight = weight;
}

string Animal::getName() {
	return this->_name;
}

string Animal::getSpecies() {
	return this->_species;
}

string Animal::getColor() {
	return this->_color;
}

int Animal::getAge() {
	return this->_age;
}

double Animal::getWeight() {
	return this->_weight;
}




Animal Animal::operator++() {
	++(this->_weight);
	return *this;
}
Animal Animal::operator--() {
	if (this->_weight - 1 < 0) {
		cout << "���������� ��������� ��� ���������. ��� ����� 1. (" << this->_weight << ")" << endl;
	}
	else {
		--(this->_weight);
	}
	return *this;
}

bool Animal::operator>(Animal other) {
	return this->_weight > other._weight;
}
bool Animal::operator<(Animal other) {
	return this->_weight < other._weight;
}
void Animal::display() {
	cout << "���(������): " << this->_name << "; ���: " << this->_species;
	cout << "; �����: " << this->_color << "; �������: " << this->_age;
	cout << "; ���: " << this->_weight << " ��" << endl;
}

string Animal::changeName(string newName) {
	this->_name = newName;
	return newName;
}

double Animal::increaseWeight(int feedingDays) {
	this->_weight += 0.01 * feedingDays;
	return this->_weight;
}
