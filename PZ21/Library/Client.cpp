#include "Client.h"
#include <iostream>

Client::Client(std::string name, int id, Membership* membership)
    : Person(name, id), membership(membership) {}

Client::~Client() {
    delete membership;
}

void Client::BorrowBook(Book* book) {
    if (borrowedBooks.size() < membership->MaxBooks() && book->IsAvailable()) {
        borrowedBooks.push_back(book);
        book->BorrowBook();
        std::cout << name << " взял(а) \"" << book->GetTitle() << "\".\n";
    } else {
        std::cout << name << " не может взять больше книг или книга недоступна.\n";
    }
}

void Client::ReturnBook(Book* book) {
    for (int i = 0; i < borrowedBooks.size(); ++i) {
        if (borrowedBooks[i] == book) {
            borrowedBooks.erase(borrowedBooks.begin() + i);
            book->ReturnBook();
            std::cout << name << " вернул(а) \"" << book->GetTitle() << "\".\n";
            return;
        }
    }
    std::cout << name << " не брал(а) эту книгу.\n";
}

void Client::ShowInfo() const {
    std::cout << "Клиент: " << name << ", ID: " << id
              << ", Тип членства: " << membership->GetLevel() << std::endl;
}
