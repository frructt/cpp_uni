//
// Created by user on 29.05.2019.
//

#ifndef LAB4_BOOK_H
#define LAB4_BOOK_H

#include "LibraryItem.h"
#include <vector>

class Book : public LibraryItem {
private:
    std::string author, title, city, publisher;
    int year, numPages;

public:
    Book();
    Book(std::string, std::string, std::string, std::string, int, int);
    Book(const Book &);

    std::string getInfo() override {
        std::string info = author + ' ' + title + ' ' + ' ' + city + ' ' + publisher + ' ' + std::to_string(year) + ' ' + std::to_string(numPages);
        return info;
    }

    void setAuthor(std::string author) {
        this->author = author;

    }
    void setTitle(std::string title) {
        this->title = title;
    }
    void setCity(std::string city) {
        this->city = city;
    }

    void setPublisher(std::string publisher) {
        this->publisher = publisher;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setNumPages(int numPages) {
        this->numPages = numPages;
    }

    std::string getAuthor() {
        return this->author;
    }

    std::string getTitle() {
        return this->title;
    }

    std::string getCity() {
        return this->city;
    }

    std::string getPublisher() {
        return this->publisher;
    }

    int getYear() {
        return this->year;
    }

    int getNumPages() {
        return this->numPages;
    }
};


#endif //LAB4_BOOK_H
