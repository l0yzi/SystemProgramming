#pragma once
#include "Book.h"
#include <vector>

class Catalog {
    std::vector<Book> books;

public:
    void AddBook(const Book& book);
    Book* FindBook(const std::string& title);
    void ShowBooks() const;
};
