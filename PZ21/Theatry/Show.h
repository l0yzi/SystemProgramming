// Show.h

#pragma once

#include <string>

class Show {
public:
    int id;
    std::string title;
    std::string time;
    double duration;

    Show(int id, std::string title, std::string time, double duration);
};
