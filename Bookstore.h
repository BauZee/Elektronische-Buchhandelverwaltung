#pragma once
#include "src/Book/Book.h"

class Bookstore{

public:
    Bookstore();
    void searchBookAuthor();
    void searchBookISBN();
    void searchBookTitle();
    void searchBook();
    void buyBook();
    void addBook();
    void updateBookInventory();
    void loadDataBase();

    char menuSelectionData();
    void userChoiceData();
    char menuSelection();
    void userChoice();


    std::vector<Book> books;
};