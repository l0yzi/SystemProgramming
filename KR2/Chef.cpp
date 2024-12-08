#include "chef.h"

Chef::Chef(const string& name) : name(name) {}
string Chef::getRole() { 
	return "Повар"; 
}
string Chef::getName() { 
	return name; 
}
