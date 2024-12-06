// main.cpp

#include "Theater.h"
#include "Actor.h"
#include "Manager.h"
#include "TicketSeller.h"
#include "Client.h"
#include "Show.h"
#include <iostream>

int main() {
    Theater theater;

    Actor actor1("Джон", "Доу", 1);
    Manager manager1("Джейн", "Смит", 2);
    TicketSeller seller1("Боб", "Браун", 3);

    theater.AddEmployee(&actor1);
    theater.AddEmployee(&manager1);
    theater.AddEmployee(&seller1);

    Client client1("Алиса", "Уайт", 1);
    Client client2("Чарли", "Грин", 2);

    theater.AddClient(&client1);
    theater.AddClient(&client2);

    Show show1(1, "Гамлет", "19:00", 2.5);
    Show show2(2, "Макбет", "21:30", 2.0);

    theater.AddShowToSchedule(show1);
    theater.AddShowToSchedule(show2);

    std::cout << "Сотрудники:" << std::endl;
    theater.PrintEmployees();

    std::cout << "\nКлиенты:" << std::endl;
    theater.PrintClients();

    std::cout << "\nРасписание:" << std::endl;
    theater.schedule.PrintSchedule();

    return 0;
}
