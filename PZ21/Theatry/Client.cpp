// Client.cpp

#include "Client.h"
#include <iostream>

Client::Client(std::string name, std::string surname, int id)
    : Person(name, surname, id) {}

void Client::PrintInfo() const {
    std::cout << "Клиент: " << name << " " << surname << std::endl;
}
