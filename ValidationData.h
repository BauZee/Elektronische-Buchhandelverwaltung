#include "src/include/include.h"

class ValidationData{
    ValidationData();

    bool isValidISBN(std::string isbn);
    bool isValidAuthor(std::string author);
    bool isValidNumberOfBooks(std::string numberOfBooks);
    bool isValidPrice(float price);
};