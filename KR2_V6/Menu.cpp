#include "menu.h"
#include <iostream>

Menu::Menu(int capacity) : numMenuItems(0), capacity(capacity), menuItems(new Product* [capacity]) {};

Menu::~Menu() {
    for (int i = 0; i < numMenuItems; ++i) {
        delete menuItems[i];
    }
    delete[] menuItems;
}

void Menu::addItem(Product* item) {
    menuItems[numMenuItems++] = item;
}

void Menu::printMenu(){
    
    for (int i = 0; i < numMenuItems; ++i) {
        cout << i + 1 << ". " << menuItems[i]->getName() << " - $"
            << menuItems[i]->getPrice() << " (Количество: "
            << menuItems[i]->getQuantity() << ")" << endl;
        
    }
}
