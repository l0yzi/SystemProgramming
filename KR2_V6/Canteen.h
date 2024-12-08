#ifndef CANTEEN_H
#define CANTEEN_H

#include "menu.h"
#include "employee.h"

class Canteen {
private:
	Menu* menu;
	Employee** employees;
	int numEmployees;
	int employeeCapacity;
public:
	Canteen(int menuCapacity, int employeeCapacity);
	~Canteen();

	void addEmployee(Employee* employee);
	void addMenuItem(Product* item);
	void printEmployees();
	void printMenu();
};
#endif
