#pragma once
#include <iostream>
#define HUMAN_H
using namespace std;
namespace check {
	int CheckNum(int num);
	double CheckNum(double num);
	string CheckAlpha(string str);
}

class Human {
public:
	Human();
	Human(string firstName, string lastName, int age, double weight, double height);
	Human(string firstName, string lastName, int age, double weight);
	Human(string firstName, string lastName, int age);
	Human(string firstName, string lastName);
	Human(string firstName);

	virtual ~Human();

	Human operator++();
	Human operator--();

	bool operator>(Human other);
	bool operator<(Human other);

	friend ostream& operator<<(ostream& output, Human instance);

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

	double calculateBMI();
	int Year();

	virtual void display();
private:
	string _firstName;
	string _lastName;
	int _age;
	double _weight;
	double _height;
};