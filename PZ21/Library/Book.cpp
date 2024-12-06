#include "Book.h"

Book::Book(std::string title, std::string author, int year)
    : title(title), author(author), year(year), isAvailable(true) {}

std::string Book::GetTitle() const { return title; }
std::string Book::GetAuthor() const { return author; }
int Book::GetYear() const { return year; }
bool Book::IsAvailable() const { return isAvailable; }

void Book::BorrowBook() { isAvailable = false; }
void Book::ReturnBook() { isAvailable = true; }
