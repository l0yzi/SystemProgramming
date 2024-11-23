#pragma once
#include <iostream>
#include "Human.h"

using namespace std;


class Adult : public IHuman {
public:
	Adult();
	Adult(string firstName, string lastName, int age, double weight, double height, string workPlace);
	Adult(string firstName, string lastName, int age, double weight, double height);
	Adult(string firstName, string lastName, int age, double weight);
	Adult(string firstName, string lastName, int age);
	Adult(string firstName, string lastName);
	Adult(string firstName);
	~Adult();

	Adult operator++();
	Adult operator--();

	bool operator>(Adult other);
	bool operator<(Adult other);

	friend ostream& operator<<(ostream& output, Adult instance);

	void setWorkPlace(string workPlace);
	string getWorkPlace();

	void display();

private:
	string _workPlace;
};