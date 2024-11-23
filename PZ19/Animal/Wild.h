#pragma once
#ifndef WILD_H
#define WILD_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Wild : public IAnimal {
public:
	Wild();
	Wild(string name, string species, string color, int age, double weight, string habitat);
	Wild(string name, string species, string color, int age, double weight);
	Wild(string name, string species, string color, int age);
	Wild(string name, string species, string color);
	Wild(string name, string species);
	Wild(string name);
	~Wild();


	friend ostream& operator<<(ostream& output, Wild instance);

	void setHabitat(string habitat);
	string getHabitat();

	void display();

private:
	string _habitat;
};
#endif 