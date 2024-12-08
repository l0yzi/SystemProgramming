// Employee.cpp

#include "Employee.h"
#include <iostream>

Employee::Employee(string name, string surname, int id, string position)
    : Person(name, surname, id), position(position) {}

void Employee::PrintInfo()  {
    cout << "Сотрудник: " << name << " " << surname << ", Должность: " << position << endl;
}
