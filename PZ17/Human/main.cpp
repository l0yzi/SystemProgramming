#include <iostream>
#include "enums.h"
#include "Child.h"
#include "Adult.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	cout << endl;

	Human human1("Dima", "Bilan", age::HumanAge::CHILD, 90, 10.8);
	cout << human1;

	Child child("Wolf", "Putilov", 14, 50, 1.6, "Kennels");
	child.displayChild();

	Adult* adult = new Adult("Vladlen", "Tatarskiy", 40, 80, 1.85, "Voencor");
	adult->displayAdult();
	delete adult;

	return 0;
}
