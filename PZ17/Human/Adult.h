#pragma once
#include <iostream>
#include "Human.h"

using namespace std;


class Adult : public Human {
public:
	Adult();
	Adult(string firstName, string lastName, int age, double weight, double height, string workPlace);
	Adult(string firstName, string lastName, int age, double weight, double height);
	Adult(string firstName, string lastName, int age, double weight);
	Adult(string firstName, string lastName, int age);
	Adult(string firstName, string lastName);
	Adult(string firstName);

	void setWorkPlace(string workPlace);
	string getWorkPlace();

	void displayAdult();

private:
	string _workPlace;
};