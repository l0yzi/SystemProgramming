#pragma once
#include <string>

class Book {
    std::string title;
    std::string author;
    int year;
    bool isAvailable;

public:
    Book(std::string title, std::string author, int year);
    std::string GetTitle() const;
    std::string GetAuthor() const;
    int GetYear() const;
    bool IsAvailable() const;
    void BorrowBook();
    void ReturnBook();
};
