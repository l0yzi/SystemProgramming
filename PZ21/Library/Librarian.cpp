#include "Librarian.h"
#include "Catalog.h"
#include "Employee.h"

#include <iostream>

Librarian::Librarian(std::string name, int id) : Employee(name, id) {}

void Librarian::ViewAllBooks(const Catalog& catalog) const {
    catalog.ShowBooks();
}

void Librarian::AddBookToCatalog(Catalog& catalog, const Book& book) {
    catalog.AddBook(book);
    std::cout << "Книга \"" << book.GetTitle() << "\" была добавлена в каталог.\n";
}
