// Employee.h

#pragma once

#include "Person.h"
#include <string>

class Employee : public Person {
protected:
    std::string position;

public:
    Employee(std::string name, std::string surname, int id, std::string position);
    void PrintInfo() const override;
};
