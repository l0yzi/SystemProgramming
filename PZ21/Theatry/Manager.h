// Manager.h

#pragma once

#include "Employee.h"

class Manager : public Employee {
public:
    Manager(std::string name, std::string surname, int id);
};
