#pragma once
#include "Employee.h"
#include "Catalog.h"
#include "Book.h"

class Librarian : public Employee {
public:
    Librarian(std::string name, int id);
    void AddBookToCatalog(Catalog& catalog, const Book& book);
    void ViewAllBooks(const Catalog& catalog) const;
};
