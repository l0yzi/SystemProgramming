#pragma once
#include "Membership.h"

class RegularMembership : public Membership {
public:
    std::string GetLevel() const override;
    int MaxBooks() const override;
};
