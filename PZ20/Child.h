#pragma once
#include <iostream>
#include "Human.h"

using namespace std;


class Child : virtual public IHuman {
public:
	Child(string firstName, string lastName, int age, double weight, double height, string studyPlace);
	Child(string studyPlace);
	Child();

	~Child();

	Child operator++();
	Child operator--();

	bool operator>(Child other);
	bool operator<(Child other);

	friend ostream& operator<<(ostream& output, Child instance);

	void setStudyPlace(string studyPlace);
	string getStudyPlace();

	virtual void readFromConsole();
	virtual void writeToFile();
	virtual void display();

private:
	string _studyPlace;
};