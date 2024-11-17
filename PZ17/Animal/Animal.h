#include <iostream>
using namespace std;
#define ANIMAL_H
namespace check {
	int CheckNum(int num);
	double CheckNum(double num);
	string CheckAlpha(string str);
}

namespace ageCategory {
	enum age {
		Young = 2,
		Adult = 6,
		Senior = 12,
	};
}

class Animal {
private:
	string _name;
	string _species;
	string _color;
	int _age;
	double _weight;
public:
	Animal();
	Animal(string name, string species, string color, int age, double weight);
	Animal(string name, string species, string color, int age);
	Animal(string name, string species, string color);
	Animal(string name, string species);
	Animal(string name);

	~Animal();

	void setName(string name);
	void setSpecies(string species);
	void setColor(string color);
	void setAge(int age);
	void setWeight(double weight);

	string getName();
	string getSpecies();
	string getColor();
	int getAge();
	double getWeight();



	Animal operator++();
	Animal operator--();

	bool operator>(Animal other);
	bool operator<(Animal other);

	friend ostream& operator<<(ostream& output, Animal instance);



	string changeName(string newName);
	double increaseWeight(int feedingDays);
	void printInfo();
};