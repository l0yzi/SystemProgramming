#include <iostream>
#include "enums.h"
#include "Child.h"
#include "Adult.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	

	Human human("Dima", "Bilan", age::HumanAge::CHILD, 90, 10.8);
	

	Child child("Wolf", "Putilov", 14, 50, 1.6, "Kennels");
	Child* child1 = new Child("Alexander", "Mansurov", 18, 68, 1.85, "RKSI");

	Adult adult("Anastasia", "Mamedova", 20, 60, 1.85, "School");
	Adult* adult1 = new Adult("Vladlen", "Tatarskiy", 40, 80, 1.85, "Voenñor");
	
	Human** arr = new Human * [5] {&human, &child, child1, &adult, adult1};
	for (int i = 0; i < 5; ++i)
	{
		cout << endl;
		arr[i]->display();
		std::cout << "__________________________________________________________________________________________" << std::endl;
	}
	delete child1;
	delete adult1;
	delete[] arr;
	return 0;
}