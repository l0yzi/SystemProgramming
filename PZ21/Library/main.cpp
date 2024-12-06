#include <iostream>
#include "Library.h"
#include "Librarian.h"
#include "RegularMembership.h"
#include "PremiumMembership.h"

int main() {
    Library library;

    library.AddBook(Book("1984", "Джордж Оруэлл", 1949));
    library.AddBook(Book("О дивный новый мир", "Олдос Хаксли", 1932));

    library.AddEmployee(Employee("Алиса", 1));
    Librarian librarian("Марк", 2);
    library.AddEmployee(librarian);

    Client* client = new Client("Боб", 101, new PremiumMembership());
    library.AddClient(client);

    librarian.ViewAllBooks(library.GetCatalog());
    librarian.AddBookToCatalog(library.GetCatalog(), Book("Война и мир", "Лев Толстой", 1869));
    librarian.ViewAllBooks(library.GetCatalog());

    Book* book = library.FindBook("1984");
    if (book) {
        client->BorrowBook(book);
    }

    library.ShowAllBooks();
    if (book) {
        client->ReturnBook(book);
    }

    library.ShowAllBooks();
    return 0;
}
