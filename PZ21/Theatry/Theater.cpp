// Theater.cpp

#include "Theater.h"
#include <iostream>

void Theater::AddEmployee(Employee* employee) {
    employees.push_back(employee);
}

void Theater::AddClient(Client* client) {
    clients.push_back(client);
}

void Theater::AddShowToSchedule(const Show& show) {
    schedule.AddShow(show);
}

void Theater::PrintEmployees() const {
    for (const auto& employee : employees) {
        employee->PrintInfo();
    }
}

void Theater::PrintClients() const {
    for (const auto& client : clients) {
        client->PrintInfo();
    }
}
