#include "Canteen.h"
#include "Product.h"
#include "Employee.h"
#include "food.h"
#include "drink.h"
#include "chef.h"
#include "waiter.h"
#include "menu.h"
#include <windows.h>
#include <iostream>
#include <clocale>

int main() {

	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	Canteen canteen(3, 2); 

	canteen.addMenuItem(new Food("Гамбургер", 5.99, 20));
	canteen.addMenuItem(new Drink("Кола", 1.50, 30));
	canteen.addMenuItem(new Food("Пицца", 8.99, 15));

	canteen.addEmployee(new Chef("Рататуй"));
	canteen.addEmployee(new Waiter("Иван Иванов"));
	

	cout << "Сотрудники:\n";
	canteen.printEmployees();
	
	cout << "\nМеню:\n";
	canteen.printMenu();

	return 0;
}
