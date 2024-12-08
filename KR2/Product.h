#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product {
public:
	virtual ~Product() = default;

	virtual string getName() = 0;
	virtual double getPrice() = 0;
	virtual int getQuantity() = 0;
	virtual void setQuantity(int quantity) = 0;
};
#endif
