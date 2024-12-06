#pragma once
#include "Catalog.h"
#include "Employee.h"
#include "Client.h"
#include <vector>

class Library {
    Catalog catalog;
    std::vector<Employee> employees;
    std::vector<Client*> clients;

public:
    ~Library();
    void AddEmployee(const Employee& employee);
    void AddClient(Client* client);
    void AddBook(const Book& book);
    void ShowAllBooks() const;
    void ShowAllClients() const;
    Book* FindBook(const std::string& title);
    Catalog& GetCatalog();
};
