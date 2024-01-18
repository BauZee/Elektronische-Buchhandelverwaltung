#include "ValidationData.h"


bool ValidationData::isValidISBN(std::string isbn) {
    size_t isbnLength = isbn.length();
    std::string isbnPrefix = isbn.substr(0,4);
    bool status = true;

    //check, if ISBN contains only digits and hyphens and no spaces.
    for (char ch : isbn) {
        if (!std::isdigit(ch) && ch != '-' && !std::isspace(ch)) {
            std::cout << "Die ISBN-Nummer darf nur Ziffern und Bindestriche enthalten und keine Leerzeichen" << std::endl;
            status = false;
        }
    }

    //check, if the maximal length of the ISBN-Number is correct.
    if(isbnLength <= 17){
        std::cout << "Ihre eingegebene ISBN-Nummer hat keine 13 Stellen." << std::endl;
        status = false;
    }

    //check, if the prefix of the ISBN-Number, which is specified by the GS1-Group, is correct.
    if(isbnPrefix != "978-" || isbnPrefix != "979-"){
        std::cout << "Das Präfix Ihrer ISBN-Nummer ist falsch." << std::endl;
        status = false;
    }
    return status;
}

//check, if the
bool ValidationData::isValidAuthor(std::string author) {
    for(char ch : author){
        if(!std::isalpha(ch) && ch != '-'){
            throw std::invalid_argument("Das Format der Eingabe des Namens vom Autor ist falsch! Bitte verwenden Sie"
                                        "ausschließlich Buchstaben und Bindestriche!");
        }
    }
    return true;
}

bool ValidationData::isValidNumberOfBooks(int numberOfBooks){
 //TODO
}


/*
 * pfad
 * einlesen
 * schleife alle daten haben
 * vektor auto isb n titlte  -> Book book = Book()
 * Book book = Book()
 */
