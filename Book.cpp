#include "Book.h"


Book::Book(std::string author, std::string title, std::string publisher, std::string isbn, float price, int numberOfBooks){
    if(this->isValidISBN(isbn)){
        this->author = author;
        this->title = title;
        this->publisher = publisher;
        this->isbn = isbn;
        this->price = price;
        this->numberOfBooks = numberOfBooks;

    }
}


void Book::setAuthor(std::string author) {
    this-> author = author;
}

void Book::setTitle(std::string title) {
    this-> title = title;
}

void Book::setPublisher(std::string publisher) {
    this-> publisher = publisher;
}

void Book::setISBN(std::string isbn) {
    this-> isbn = isbn;
}

void Book::setPrice(float price) {
    this-> price = price;
}

void Book::setNumberOfBooks(int numberOfBooks) {
    this->numberOfBooks = numberOfBooks;
}

std::string Book::getAuthor() {
    return this-> author;
}

std::string Book::getTitle() {
    return this-> title;
}

std::string Book::getPublisher() {
    return this-> publisher;
}

std::string Book::getISBN() {
    return this-> isbn;
}

float Book::getPrice() {
    return this-> price;
}

int Book::getNumberOfBooks() {
    return this-> numberOfBooks;
}

void Book::showBookInformations() {
    std::cout << "Autor: " << author << std::endl;
    std::cout << "Titel: " << title << std::endl;
    std::cout << "Verlag: " << publisher << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;
    std::cout << "Preis: " << price << std::endl;
    std::cout << "Anzahl im Lager: " << numberOfBooks << std::endl;
    std::cout << "------------------------" << std::endl;
}


