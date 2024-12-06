#pragma once
#include "Membership.h"

class PremiumMembership : public Membership {
public:
    std::string GetLevel() const override;
    int MaxBooks() const override;
};
