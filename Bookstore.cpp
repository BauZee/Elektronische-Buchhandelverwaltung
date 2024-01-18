#include "src/Bookstore/Bookstore.h"

Bookstore::Bookstore(){
    this->userChoiceData();
};

char Bookstore::menuSelectionData() {
    char choice;

    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Willkommen bei Ihrer Buchhandlungslagerverwaltung." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Wählen Sie eine Option:" << std::endl;
    std::cout << "   A: Mit einem leeren Datensatz starten." << std::endl;
    std::cout << "   B: Einen bestehenden Datensatz einlesen." << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Ihre Wahl: ";
    std::cin >> choice;

    return choice;
}
/*
 * Datei öffnen
 * Auslesen und alle Werte in verschiedene Listen speichern und anhand diesen Listen dann mit einer Schleife buchobjekte erstellen und dann da rein ballern in den vektor
 */
void Bookstore::userChoiceData(){
    char choice = this->menuSelectionData();

    switch (choice) {
        case 'A':
            std::cout << "Sie haben einen leeren Datensatz ausgewählt." << std::endl;
            break;
        case 'B':
            this->loadDataBase();
            std::cout << "Ihr Datensatz wurde erfolgreich eingelesen!" << std::endl;
            break;
        default:
            std::cout << "Ungültige Eingabe. Bitte wählen Sie A oder B." << std::endl;
    }
    this->menuSelection();
}

char Bookstore::menuSelection() {
    char choice;
    std::cout << "A: Zeige alle Bücher aus der Bibliothek an." << std::endl;
    std::cout << "B: Neues Buch in die Datenbank aufnehmen." << std::endl;
    std::cout << "C: Nach einem Buch suchen." << std::endl;
    std::cout << "D: Lagerbestände von existierenden Büchern korrigieren." << std::endl;
    std::cout << "E: Ein Buch kaufen." << std::endl;

    return choice;
}


void Bookstore::addBook() {
    std::string author, title, publisher, isbn;
    int numberOfBooks;
    float price;

    std::cout << "Wie heißt das Buch" << std::endl;
    std::cout << "Name des Buches: " << std::endl;
    std::cin >> title;

    std::cout << "Wie heißt der Autor dieses Buches?" << std::endl;
    std::cout << "Autor des Buches: " << std::endl;
    std::cin >> author;

    std::cout << "Wie heißt der Verlag des Buches?" << std::endl;
    std::cout << "Name des Verlages: " << std::endl;
    std::cin >> publisher;

    std::cout << "Wie lautet die ISBN Nummer des Buches?" << std::endl;
    std::cout << "ISBN-Nummer: " << std::endl;
    std::cin >> isbn;

    std::cout << "Wie viele Bücher haben Sie" << std::endl;
    std::cout << "Anzahl der Bücher: " << std::endl;
    std::cin >> numberOfBooks;

    std::cout << "Wie teuer ist das Buch?" << std::endl;
    std::cout << "Preis des Buches: " << std::endl;
    std::cin >> price;

    Book book = Book(author,title,publisher,isbn,price,numberOfBooks);
    this->books.push_back(book);

    std::cout<< "Das Buch wurde erfolgreich in der Bibliothek eingelagert!" <<std::endl;
}


void Bookstore::searchBookTitle() {

}
void Bookstore::buyBook() {
    //TODO
    }
void Bookstore::loadDataBase(std::string databaseName) {
}