// Schedule.h

#pragma once

#include "Show.h"
#include <vector>

class Schedule {
public:
    std::vector<Show> shows;

    void AddShow(const Show& show);
    void PrintSchedule() const;
};
