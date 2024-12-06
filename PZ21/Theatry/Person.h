// Person.h

#pragma once

#include <string>

class Person {
protected:
    std::string name;
    std::string surname;
    int id;

public:
    Person(std::string name, std::string surname, int id);
    virtual void PrintInfo() const = 0;
};
