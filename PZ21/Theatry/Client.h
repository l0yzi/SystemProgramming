// Client.h

#pragma once

#include "Person.h"

class Client : public Person {
public:
    Client(std::string name, std::string surname, int id);
    void PrintInfo() const override;
};
