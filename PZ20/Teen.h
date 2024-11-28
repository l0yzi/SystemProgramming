#pragma once
#include <iostream>
#include "Child.h"
#include "Adult.h"

using namespace std;


class Teen : public Child, Adult {
public:
	Teen();
	Teen(string firstName, string lastName, int age, double weight, double height, string studyPlace, string workPlace, string house);

	~Teen();

	Teen operator++();
	Teen operator--();

	bool operator>(Teen other);
	bool operator<(Teen other);

	friend ostream& operator<<(ostream& output, Teen instance);

	void sethouse(string house);
	string gethouse();

	void readFromConsole();
	void writeToFile();
	void display();

private:
	string _house;
};