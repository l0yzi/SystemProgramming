#include "Library.h"
#include <iostream>

Library::~Library() {
    for (Client* client : clients) {
        delete client;
    }
}

void Library::AddEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void Library::AddClient(Client* client) {
    clients.push_back(client);
}

void Library::AddBook(const Book& book) {
    catalog.AddBook(book);
}

void Library::ShowAllBooks() const {
    catalog.ShowBooks();
}

void Library::ShowAllClients() const {
    for (const Client* client : clients) {
        client->ShowInfo();
    }
}

Book* Library::FindBook(const std::string& title) {
    return catalog.FindBook(title);
}

Catalog& Library::GetCatalog() {
    return catalog;
}
