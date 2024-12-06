#include "Catalog.h"
#include <iostream>

void Catalog::AddBook(const Book& book) {
    books.push_back(book);
}

Book* Catalog::FindBook(const std::string& title) {
    for (auto& book : books) {
        if (book.GetTitle() == title) {
            return &book;
        }
    }
    return nullptr;
}

void Catalog::ShowBooks() const {
    for (const auto& book : books) {
        std::cout << "Название: " << book.GetTitle()
                  << ", Автор: " << book.GetAuthor()
                  << ", Год: " << book.GetYear()
                  << ", Доступна: " << (book.IsAvailable() ? "Да" : "Нет") << std::endl;
    }
}
