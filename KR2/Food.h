#ifndef FOOD_H
#define FOOD_H

#include "product.h"
#include <string>

class Food : public Product {
private:
	string name;
	double price;
	int quantity;
public:
	Food(string name, double price, int quantity);
	string getName();
	double getPrice();
	int getQuantity();
	void setQuantity(int quantity);
};
#endif
