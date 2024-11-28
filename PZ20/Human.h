#pragma once
#include <iostream>

using namespace std;

class IHuman {
public:
	IHuman(string firstName, string lastName, int age, double weight, double height);
	IHuman();

	virtual ~IHuman();

	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setAge(int age);
	void setWeight(double weight);
	void setHeight(double height);

	string getFirstName();
	string getLastName();
	int getAge();
	double getWeight();
	double getHeight();

	virtual void readFromConsole();
	virtual void writeToFile();
	virtual void display() = 0;
	double bodyWeightIndex();
	int bornYear();

private:
	string _firstName;
	string _lastName;
	int _age;
	double _weight;
	double _height;
};