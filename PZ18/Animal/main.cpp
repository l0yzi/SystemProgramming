#include <iostream>
#include "enums.h"
#include "Wild.h"
#include "Pet.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	Animal animal("Boris", "dog", "Black", ageCategory::age::Adult, 3);

	Pet pet1("Murzick", "cat", "orange", 3, 4, "Andrey Bolkonskiy");
	Pet* pet = new Pet("Hruk", "Pig", "pink", 8, 12, "Andrey Bolkonskiy");
	
	Wild wild("Fubium", "Nosorog", "Gray", 6, 1200, "Savannah");
	Wild* wild1 = new Wild("Baloo", "Bear", "Brown", 9, 210, "Forest");


	Animal** arr = new Animal * [5] {&animal, &pet1, pet, &wild, wild1};
	for (int i = 0; i < 5; ++i)
	{
		arr[i]->display();
		std::cout << "_____________________________________________________________________________________" << std::endl;
	}
	delete pet;
	delete wild1;
	delete[] arr;
	return 0;
}
