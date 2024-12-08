#ifndef CHEF_H
#define CHEF_H
#include "employee.h"
#include <string>

class Chef : public Employee {
private:
	string name;
public:
	Chef(const string& name);

	string getRole();
	string getName();
};
#endif
