#include <iostream>
#include "Car.h"
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

ICar::ICar() {
	this->_brand = "-"; this->_color = "-"; this->_bodyType = "-"; this->_engineVolume = 0; this->_mileage = 0;
}

ICar::ICar(string brand, string color, string bodyType, double engineVolume, int mileage) : _brand(check::CheckAlpha(brand)), _color(check::CheckAlpha(color)),
_bodyType(check::CheckAlpha(bodyType)), _engineVolume(check::CheckNum(engineVolume)), _mileage(check::CheckNum(mileage)) {}

//Car::Car(string brand, string color, string bodyType, double engineValue) : Car(brand, color, bodyType, engineValue, 0) {}
//Car::Car(string brand, string color, string bodyType) : Car(brand, color, bodyType, 0, 0) {}
//Car::Car(string brand, string color) : Car(brand, color, "-", 0, 0) {}
//Car::Car(string brand) : Car(brand, "-", "-", 0, 0) {}

ICar::~ICar() {}


void ICar::setBrand(string brand) {
	this->_brand = brand;
}

void ICar::setColor(string color) {
	this->_color = color;
}

void ICar::setBodyType(string bodyType) {
	if (bodyType == "cabriolet" || bodyType == "sedan" || bodyType == "Crossover") {
		this->_bodyType = bodyType;
		return;
	}
	cout << "Указан неверный тип кузова! Доступные значения: Sabriolet // Sedan // Crossover" << endl;
}

void ICar::setEngineVolume(double engineVolume) {
	if (check::CheckNum(engineVolume) == 0) {
		return;
	}
	this->_engineVolume = engineVolume;
}

void ICar::setMileage(int mileage) {
	if (check::CheckNum(mileage) == 0) {
		return;
	}
	this->_mileage = mileage;
}

string ICar::getBrand() {
	return this->_brand;
}

string ICar::getColor() {
	return this->_color;
}

string ICar::getBodyType() {
	return this->_bodyType;
}

double ICar::getEngineVolume() {
	return this->_engineVolume;
}

int ICar::getMileage() {
	return this->_mileage;
}


void ICar::display()
{
	cout << "Марка: " << _brand
		<< "; Цвет: " << _color
		<< "; Тип Кузова: " << _bodyType
		<< "; Объём двигателя: " << _engineVolume
		<< "; Пробег: " << _mileage << endl;
}