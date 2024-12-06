// Schedule.cpp

#include "Schedule.h"
#include <iostream>

void Schedule::AddShow(const Show& show) {
    shows.push_back(show);
}

void Schedule::PrintSchedule() const {
    for (const auto& show : shows) {
        std::cout << "Постановка: " << show.title << ", Время: " << show.time << ", Длительность: " << show.duration << " часов" << std::endl;
    }
}
