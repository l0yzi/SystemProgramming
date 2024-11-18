#pragma once
#include <iostream>
#include "Human.h"

using namespace std;


class Child : public Human {
public:
	Child();
	Child(string firstName, string lastName, int age, double weight, double height, string studyPlace);
	Child(string firstName, string lastName, int age, double weight, double height);
	Child(string firstName, string lastName, int age, double weight);
	Child(string firstName, string lastName, int age);
	Child(string firstName, string lastName);
	Child(string firstName);
	~Child();


	void setStudyPlace(string studyPlace);
	string getPlaceOfStudy();

	void display();

private:
	string _placeOfStudy;
};