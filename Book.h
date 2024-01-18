#include "src/include/include.h"
#pragma once

class Book {
public:
    Book(std::string author, std::string title, std::string publisher, std::string isbn, float price, int numberOfBooks);

    void setAuthor(std::string author);
    void setTitle(std::string title);
    void setPublisher(std::string publisher);
    void setISBN(std::string isbn);
    void setPrice(float price);
    void setNumberOfBooks(int numberOfBooks);

    std::string getAuthor();
    std::string getTitle();
    std::string getPublisher();
    std::string getISBN();
    float getPrice();
    int getNumberOfBooks();

    void showBookInformations();

private:
    std::string author;
    std::string title;
    std::string publisher;
    std::string isbn;
    float price;
    int numberOfBooks;
};
