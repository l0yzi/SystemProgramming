// Ticket.h

#pragma once

#include <string>

class Ticket {
public:
    int showId;
    std::string seat;
    double price;

    Ticket(int showId, std::string seat, double price);
};
