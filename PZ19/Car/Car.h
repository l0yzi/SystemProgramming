#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

namespace check {
	int CheckNum(int num);
	double CheckNum(double num);
	string CheckAlpha(string str);
}

class ICar {
	private:
		string _brand;
		string _color;
		string _bodyType;
		double _engineVolume;
		int _mileage;
	public:
		ICar();
		ICar(string brand, string color, string bodyType, double engineVolume, int mileage);
		/*Car(string brand, string color, string bodyType, double engineVolume);
		Car(string brand, string color, string bodyType);
		Car(string brand, string color);
		Car(string brand);*/

		virtual ~ICar();

		void setBrand(string brand);
		void setColor(string color);
		void setBodyType(string bodyType);
		void setEngineVolume(double engineVolume);
		void setMileage(int mileage);

		string getBrand();
		string getColor();
		string getBodyType();
		double getEngineVolume();
		int getMileage();

		

		virtual void display() = 0;
};
#endif