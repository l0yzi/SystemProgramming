#include <iostream>
#include <fstream>
#include "Adult.h"

using namespace std;


Adult::Adult(string firstName, string lastName, int age, double weight, double height, string workPlace) :
	IHuman(firstName, lastName, age, weight, height), _workPlace(workPlace) {}
Adult::Adult(string workPlace) : Adult("-", "-", 0, 0, 0, workPlace) {}
Adult::Adult() : Adult("-", "-", 0, 0, 0, "-") {}

Adult::~Adult() {}

Adult Adult::operator++() {
	this->setHeight(this->getHeight() + 0.1);
	return *this;
}
Adult Adult::operator--() {
	if (this->getHeight() - 0.1 < 0) {
		cout << "Cannot decrement adult height on 0.1. Heigh is less than 0.1 (" << this->getHeight() << ")" << endl;
	}
	else {
		this->setHeight(this->getHeight() - 0.1);
	}
	return *this;
}

bool Adult::operator>(Adult other) {
	return this->getHeight() > other.getHeight();
}
bool Adult::operator<(Adult other) {
	return this->getHeight() < other.getHeight();
}

ostream& operator<<(ostream& output, Adult instance) {
	output << "Adult: " << instance.getFirstName() << " " << instance.getLastName()
		<< "; Возраст: " << instance.getAge()
		<< "; Вес: " << instance.getWeight()
		<< "; Рост: " << instance.getHeight()
		<< "; Место Работы: " << instance._workPlace << endl;
	return output;
}

void Adult::setWorkPlace(string workPlace) {
	this->_workPlace = workPlace;
}

string Adult::getWorkPlace() {
	return this->_workPlace;
}

void Adult::readFromConsole() {
	IHuman::readFromConsole();
	std::cout << "Место работы: ";
	cin >> this->_workPlace;
}

void Adult::writeToFile() {
	ofstream out;
	out.open("Peoples.txt", ios::app);
	if (out.is_open()) {
		out << *this;
	}
	out.close();
}

void Adult::display() {
	cout << "Adult: " << this->getFirstName() << " " << this->getLastName()
		<< "; Возраст: " << this->getAge()
		<< "; Вес: " << this->getWeight()
		<< "; Рост: " << this->getHeight()
		<< "; Место Работы: " << this->_workPlace << endl;
}