#include "food.h"

Food::Food(string name, double price, int quantity) : name(name), price(price), quantity(quantity) {}

string Food::getName(){ 
	return name; 
}
double Food::getPrice(){ 
	return price; 
}
int Food::getQuantity(){ 
	return quantity; 
}
void Food::setQuantity(int quantity) { 
	this->quantity = quantity; 
}
