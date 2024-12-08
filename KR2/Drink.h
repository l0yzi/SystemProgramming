#ifndef DRINK_H
#define DRINK_H

#include "product.h"
#include <string>

class Drink : public Product {
private:
	string name;
	double price;
	int quantity;
public:
	Drink(string name, double price, int quantity);
	string getName();
	double getPrice();
	int getQuantity();
	void setQuantity(int quantity);
};
#endif
