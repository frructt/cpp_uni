//
// Created by user on 29.05.2019.
//

#include "Book.h"

Book::Book() {
    author = "";
    title = "";
    city = "";
    publisher = "";

    year = 0;
    numPages = 0;
}

Book::Book(std::string author, std::string title, std::string city, std::string publisher, int year, int numPages) {
    setAuthor(author);
    setTitle(title);
    setCity(city);
    setPublisher(publisher);
    setYear(year);
    setNumPages(numPages);
}

Book::Book(const Book & book) {
    setAuthor(book.author);
    setTitle(book.title);
    setCity(book.city);
    setPublisher(book.publisher);
    setYear(book.year);
    setNumPages(book.numPages);
}