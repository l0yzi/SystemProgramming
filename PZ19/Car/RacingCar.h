#ifndef RACINGCAR_H
#define RACINGCAR_H
#pragma once
#include <iostream>
#include "Car.h"
using namespace std;


class RacingCar : public ICar {
	public:
		RacingCar();
		RacingCar(string _brend, string _color, string _bodyType, double _motorCapacity, int _mileage, bool _hasCarburetor);
		RacingCar(string _brend, string _color, string _bodyType, double _motorCapacity, int _mileage);
		RacingCar(string _brend, string _color, string _bodyType, double _motorCapacity);
		RacingCar(string _brend, string _color, string _bodyType);
		RacingCar(string _brend, string _color);
		RacingCar(string _brend);
		~RacingCar();

		friend ostream& operator<<(ostream& output, RacingCar instance);

		void setHasCarburetor(bool hasCarburetor);
		bool getHasCarburetor();

		void display();

	private:
		bool _hasCarburetor;
};
#endif