#pragma once
#include "Person.h"
#include "Membership.h"
#include <vector>
#include "Book.h"

class Client : public Person {
    Membership* membership;
    std::vector<Book*> borrowedBooks;

public:
    Client(std::string name, int id, Membership* membership);
    ~Client();
    void BorrowBook(Book* book);
    void ReturnBook(Book* book);
    void ShowInfo() const override;
};
