#include <iostream>
#include "enums.h"
#include "Wild.h"
#include "Pet.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << endl;

	Animal* animal = new Animal("Boris", "dog", "Black");
	cout << *animal;
	delete animal;

	Pet* pet = new Pet("Loag", "parrot", "red\orange\yellow\green");
	pet->setOwner("Andrey Bolkonskiy");
	pet->displayPet();
	delete pet;

	Wild wild("Fubium", "Nosorog", "Gray", 6, 1200, "Forest");
	wild.displayWild();

	return 0;
}