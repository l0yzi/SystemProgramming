#pragma once
#include <iostream>
#include "Car.h"
using namespace std;


class RacingCar : public Car {
	public:
		RacingCar();
		RacingCar(string _brend, string _color, string _bodyType, double _motorCapacity, int _mileage, bool _hasCarburetor);
		RacingCar(string _brend, string _color, string _bodyType, double _motorCapacity, int _mileage);
		RacingCar(string _brend, string _color, string _bodyType, double _motorCapacity);
		RacingCar(string _brend, string _color, string _bodyType);
		RacingCar(string _brend, string _color);
		RacingCar(string _brend);

		void setHasCarburetor(bool hasCarburetor);
		bool getHasCarburetor();

		void displayRacingCar();

	private:
		bool _hasCarburetor;
};