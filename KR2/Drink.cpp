#include "drink.h"

Drink::Drink(std::string name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

std::string Drink::getName(){ 
	return name; 
}
double Drink::getPrice(){ 
	return price; 
}
int Drink::getQuantity(){ 
	return quantity; 
}
void Drink::setQuantity(int quantity) { 
	this->quantity = quantity; 
}
