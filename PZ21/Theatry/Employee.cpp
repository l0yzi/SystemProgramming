// Employee.cpp

#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, std::string surname, int id, std::string position)
    : Person(name, surname, id), position(position) {}

void Employee::PrintInfo() const {
    std::cout << "Сотрудник: " << name << " " << surname << ", Должность: " << position << std::endl;
}
