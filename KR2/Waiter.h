#ifndef WAITER_H
#define WAITER_H

#include "employee.h"
#include <string>

class Waiter : public Employee {
private:
	string name;
public:
	Waiter(const string& name);
	string getRole();
	string getName();
};
#endif
