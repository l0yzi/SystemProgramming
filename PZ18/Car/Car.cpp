#include <iostream>
#include "Car.h"
using namespace std;

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

Car::Car() {
	this->_brand = "-"; this->_color = "-"; this->_bodyType = "-"; this->_engineVolume = 0; this->_mileage = 0;
}

Car::Car(string brand, string color, string bodyType, double engineVolume, int mileage) : _brand(check::CheckAlpha(brand)), _color(check::CheckAlpha(color)),
_bodyType(check::CheckAlpha(bodyType)), _engineVolume(check::CheckNum(engineVolume)), _mileage(check::CheckNum(mileage)) {}

Car::Car(string brand, string color, string bodyType, double engineValue) : Car(brand, color, bodyType, engineValue, 0) {}
Car::Car(string brand, string color, string bodyType) : Car(brand, color, bodyType, 0, 0) {}
Car::Car(string brand, string color) : Car(brand, color, "-", 0, 0) {}
Car::Car(string brand) : Car(brand, "-", "-", 0, 0) {}

Car::~Car() {}

ostream& operator<<(ostream& output, Car instance) {
	output << "�����: " << instance._brand
		<< "; ����: " << instance._color
		<< "; ��� ������: " << instance._bodyType
		<< "; ����� ���������: " << instance._engineVolume
		<< "; ������: " << instance._mileage << endl;
	return output;
}

void Car::setBrand(string brand) {
	this->_brand = brand;
}

void Car::setColor(string color) {
	this->_color = color;
}

void Car::setBodyType(string bodyType) {
	if (bodyType == "cabriolet" || bodyType == "sedan" || bodyType == "Crossover") {
		this->_bodyType = bodyType;
		return;
	}
	cout << "������ �������� ��� ������! ��������� ��������: Sabriolet // Sedan // Crossover" << endl;
}

void Car::setEngineVolume(double engineVolume) {
	if (check::CheckNum(engineVolume) == 0) {
		return;
	}
	this->_engineVolume = engineVolume;
}

void Car::setMileage(int mileage) {
	if (check::CheckNum(mileage) == 0) {
		return;
	}
	this->_mileage = mileage;
}

string Car::getBrand() {
	return this->_brand;
}

string Car::getColor() {
	return this->_color;
}

string Car::getBodyType() {
	return this->_bodyType;
}

double Car::getEngineVolume() {
	return this->_engineVolume;
}

int Car::getMileage() {
	return this->_mileage;
}


void Car::display()
{
	cout << "�����: " << _brand
		<< "; ����: " << _color
		<< "; ��� ������: " << _bodyType
		<< "; ����� ���������: " << _engineVolume
		<< "; ������: " << _mileage << endl;
}