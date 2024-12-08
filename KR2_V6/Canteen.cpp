#include "canteen.h"
#include <iostream>

Canteen::Canteen(int menuCapacity, int employeeCapacity) : menu(new Menu(menuCapacity)), numEmployees(0), employeeCapacity(employeeCapacity), employees(new Employee* [employeeCapacity]) {}

Canteen::~Canteen() {
    delete menu;
    for (int i = 0; i < numEmployees; ++i) {
        delete employees[i];
    }
    delete[] employees;
}

void Canteen::addEmployee(Employee* employee) {
    employees[numEmployees++] = employee;
}

void Canteen::addMenuItem(Product* item) {
    menu->addItem(item);
}

void Canteen::printEmployees(){
    for (int i = 0; i < numEmployees; ++i) {
        cout << i + 1 << ". " << employees[i]->getRole() << ": " << employees[i]->getName() << endl;
    }
}

void Canteen::printMenu(){
    menu->printMenu();
}
