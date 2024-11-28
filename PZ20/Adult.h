#pragma once
#include <iostream>
#include "Human.h"

using namespace std;


class Adult : virtual public IHuman {
public:
	Adult(string firstName, string lastName, int age, double weight, double height, string workPlace);
	Adult(string workPlace);
	Adult();

	~Adult();

	Adult operator++();
	Adult operator--();

	bool operator>(Adult other);
	bool operator<(Adult other);

	friend ostream& operator<<(ostream& output, Adult instance);

	void setWorkPlace(string workPlace);
	string getWorkPlace();

	virtual void readFromConsole();
	virtual void writeToFile();
	virtual void display();

private:
	string _workPlace;
};