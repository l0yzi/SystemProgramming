	#ifndef ANIMAL_H
	#define ANIMAL_H
	#include <iostream>
	using namespace std;


	namespace check {
		int CheckNum(int num);
		double CheckNum(double num);
		string CheckAlpha(string str);
	}

	class IAnimal {
	private:
		string _name;
		string _species;
		string _color;
		int _age;
		double _weight;
	public:
		IAnimal();
		IAnimal(string name, string species, string color, int age, double weight);
		IAnimal(string name, string species, string color, int age);
		IAnimal(string name, string species, string color);
		IAnimal(string name, string species);
		IAnimal(string name);
		
		virtual ~IAnimal(); // вирт дестр

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

		string changeName(string newName);
		double increaseWeight(int feedingDays);

		virtual void display() = 0; 
		
	};

	#endif 