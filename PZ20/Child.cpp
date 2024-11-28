#include <iostream>
#include <fstream>
#include "Child.h"

using namespace std;

Child::Child(string firstName, string lastName, int age, double weight, double height, string studyPlace) :
	IHuman(firstName, lastName, age, weight, height), _studyPlace(studyPlace) {}
Child::Child(string studyPlace) : Child("-", "-", 0, 0, 0, studyPlace) {}
Child::Child() : Child("-", "-", 0, 0, 0, "-") {}

Child::~Child() {}

Child Child::operator++() {
	this->setHeight(this->getHeight() + 0.1);
	return *this;
}
Child Child::operator--() {
	if (this->getHeight() - 0.1 < 0) {
		cout << "���������� ��������� ������ �� 0,1. (" << this->getHeight() << ")" << endl;
	}
	else {
		this->setHeight(this->getHeight() - 0.1);
	}
	return *this;
}

bool Child::operator>(Child other) {
	return this->getHeight() > other.getHeight();
}
bool Child::operator<(Child other) {
	return this->getHeight() < other.getHeight();
}

ostream& operator<<(ostream& output, Child instance) {
	output << "Child: " << instance.getFirstName() << " " << instance.getLastName()
		<< "; �������: " << instance.getAge()
		<< "; ���: " << instance.getWeight()
		<< "; ����: " << instance.getHeight()
		<< "; ����� �����: " << instance._studyPlace << endl;
	return output;
}

void Child::setStudyPlace(string studyPlace) {
	this->_studyPlace = studyPlace;
}

string Child::getStudyPlace() {
	return this->_studyPlace;
}

void Child::readFromConsole() {
	IHuman::readFromConsole();
	std::cout << "����� �����: ";
	cin >> this->_studyPlace;
}

void Child::writeToFile() {
	ofstream out;
	out.open("Peolpes.txt", ios::app);
	if (out.is_open()) {
		out << *this;
	}
	out.close();
}

void Child::display() {
	cout << "Child: " << this->getFirstName() << " " << this->getLastName()
		<< "; �������: " << this->getAge()
		<< "; ���: " << this->getWeight()
		<< "; ����: " << this->getHeight()
		<< "; ����� �����: " << this->_studyPlace << endl;
}