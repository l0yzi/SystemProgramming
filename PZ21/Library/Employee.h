#pragma once
#include "Person.h"

class Employee : public Person {
public:
    Employee(std::string name, int id);
    void ShowInfo() const override;
};
