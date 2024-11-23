#include <iostream>
#include "Animal.h"

using namespace std;

//Проверка
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



IAnimal::IAnimal() {
	_name = "-"; _species = "-"; _color = "-"; this->_age = 0; _weight = 0;
}


IAnimal::IAnimal(string name, string species, string color, int age, double weight) : _name(check::CheckAlpha(name)),
_species(check::CheckAlpha(species)), _color(check::CheckAlpha(color)), _age(check::CheckNum(age)), _weight(check::CheckNum(weight)) {}

IAnimal::IAnimal(string name, string species, string color, int age) : IAnimal(name, species, color, age, 0) {}
IAnimal::IAnimal(string name, string species, string color) : IAnimal(name, species, color, 0, 0) {}
IAnimal::IAnimal(string name, string species) : IAnimal(name, species, "-", 0, 0) {}
IAnimal::IAnimal(string name) : IAnimal(name, "-", "-", 0, 0) {}

IAnimal::~IAnimal() {}

void IAnimal::setName(string name) {
	this->_name = name;
}

void IAnimal::setSpecies(string species) {
	this->_species = species;
}

void IAnimal::setColor(string color) {
	this->_color = color;
}

void IAnimal::setAge(int age) {
	if (check::CheckNum(age) == 0) {
		return;
	}
	this->_age = age;
}

void IAnimal::setWeight(double weight) {
	if (check::CheckNum(weight) == 0) {
		return;
	}
	this->_weight = weight;
}

string IAnimal::getName() {
	return this->_name;
}

string IAnimal::getSpecies() {
	return this->_species;
}

string IAnimal::getColor() {
	return this->_color;
}

int IAnimal::getAge() {
	return this->_age;
}

double IAnimal::getWeight() {
	return this->_weight;
}

void IAnimal::display() {
	cout << "Имя(Кличка): " << this->_name << "; Вид: " << this->_species;
	cout << "; Окрас: " << this->_color << "; Возраст: " << this->_age;
	cout << "; Вес: " << this->_weight << " кг" << endl;
}

string IAnimal::changeName(string newName) {
	this->_name = newName;
	return newName;
}

double IAnimal::increaseWeight(int feedingDays) {
	this->_weight += 0.01 * feedingDays;
	return this->_weight;
}
