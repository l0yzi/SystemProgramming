#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, int id) : Person(name, id) {}

void Employee::ShowInfo() const {
    std::cout << "Сотрудник: " << name << ", ID: " << id << std::endl;
}
