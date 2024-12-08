#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>

class Employee {
public:
	virtual ~Employee() = default;

	virtual string getRole() = 0;
	virtual string getName() = 0;
};
#endif
