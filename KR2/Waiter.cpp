#include "waiter.h"

Waiter::Waiter(const string& name) : name(name) {}
string Waiter::getRole() { 
	return "Официант"; 
}
string Waiter::getName() { 
	return name; 
}
