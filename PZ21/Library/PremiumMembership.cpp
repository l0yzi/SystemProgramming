#include "PremiumMembership.h"

std::string PremiumMembership::GetLevel() const {
    return "Премиум";
}

int PremiumMembership::MaxBooks() const {
    return 10;
}
