#pragma once
#include <string>

class Membership {
public:
    virtual ~Membership() = default;
    virtual std::string GetLevel() const = 0;
    virtual int MaxBooks() const = 0;
};
