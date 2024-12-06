// Theater.h

#pragma once

#include "Employee.h"
#include "Client.h"
#include "Schedule.h"
#include <vector>

class Theater {
public:
    std::vector<Employee*> employees;
    std::vector<Client*> clients;
    Schedule schedule;

    void AddEmployee(Employee* employee);
    void AddClient(Client* client);
    void AddShowToSchedule(const Show& show);
    void PrintEmployees() const;
    void PrintClients() const;
};
