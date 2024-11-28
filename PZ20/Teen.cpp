#include <iostream>
#include <fstream>
#include "Teen.h"

using namespace std;

Teen::Teen(string firstName, string lastName, int age, double weight, double height, string studyPlace, string workPlace, string house) :
	IHuman(firstName, lastName, age, weight, height), Child(studyPlace), Adult(workPlace), _house(house) {}
Teen::Teen() : Teen("-", "-", 0, 0, 0, "-", "-", "-") {}

Teen::~Teen() {}

Teen Teen::operator++() {
	this->setHeight(this->getHeight() + 0.1);
	return *this;
}
Teen Teen::operator--() {
	if (this->getHeight() - 0.1 < 0) {
		cout << "Cannot decrement child height on 0.1. Heigh is less than 0.1 (" << this->getHeight() << ")" << endl;
	}
	else {
		this->setHeight(this->getHeight() - 0.1);
	}
	return *this;
}

bool Teen::operator>(Teen other) {
	return this->getHeight() > other.getHeight();
}
bool Teen::operator<(Teen other) {
	return this->getHeight() < other.getHeight();
}

ostream& operator<<(ostream& output, Teen instance) {
	output << "Teen: " << instance.getFirstName() << " " << instance.getLastName()
		<< "; �������: " << instance.getAge()
		<< "; ���: " << instance.getWeight()
		<< "; ����: " << instance.getHeight()
		<< "; ����� �����: " << instance.getStudyPlace()
		<< "; ����� ������: " << instance.getWorkPlace()
		<< "; ���: " << instance._house << endl;
	return output;
}

void Teen::sethouse(string house) {
	this->_house = house;
}

string Teen::gethouse() {
	return this->_house;
}

void Teen::readFromConsole() {
	Child::readFromConsole();
	cout << "����� ������: ";

	string workPlace;
	cin >> workPlace;
	this->setWorkPlace(workPlace);

	cout << "���: ";
	cin >> this->_house;
}

void Teen::writeToFile() {
	ofstream out;
	out.open("Peolpes.txt", ios::app);
	if (out.is_open()) {
		out << *this;
	}
	out.close();
}

void Teen::display() {
	cout << "Teen: " << this->getFirstName() << " " << this->getLastName()
		<< "; �������: " << this->getAge()
		<< "; ���: " << this->getWeight()
		<< "; ����: " << this->getHeight()
		<< "; ����� �����: " << this->getStudyPlace()
		<< "; ����� ������: " << this->getWorkPlace()
		<< "; ���: " << this->_house << endl;
}