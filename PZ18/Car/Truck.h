#ifndef TRUCK_H
#define TRUCK_H
#pragma once
#include <iostream>
#include "Car.h"
using namespace std;

class Car;

class Truck : public Car {
	public:
		Truck();
		Truck(string _brand, string _color, string _bodyType, double _engineVolume, int _mileage, bool _hasTrailer);
		Truck(string _brand, string _color, string _bodyType, double _engineVolume, int _mileage);
		Truck(string _brand, string _color, string _bodyType, double _engineVolume);
		Truck(string _brand, string _color, string _bodyType);
		Truck(string _brand, string _color);
		Truck(string _brand);
		~Truck();

		void setHasTrailer(bool hasTrailer);
		bool getHasTrailer();

		void display();

	private:
		bool _hasTrailer;
};
#endif