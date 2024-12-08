#ifndef MENU_H
#define MENU_H

#include "product.h"

class Menu {
private:
  Product** menuItems;
  int numMenuItems;
  int capacity;
public:
  Menu(int capacity);

  ~Menu();

  void addItem(Product* item);
  void printMenu();
};
#endif
