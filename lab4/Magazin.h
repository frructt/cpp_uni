//
// Created by user on 29.05.2019.
//

#ifndef LAB4_MAGAZIN_H
#define LAB4_MAGAZIN_H

#include "LibraryItem.h"

//volume, number, year, title
class Magazin : public LibraryItem {
private:
    int volume, number, year;
    std::string title;

public:
    Magazin();
    Magazin(std::string, int, int, int);
    Magazin(const Magazin &);

    std::string getInfo() {
        std::string info = title + ' ' + std::to_string(year) + " № " + std::to_string(number) + '(' + std::to_string(volume) + ')';
        return info;
    }

    void setVolume(int volume) {
        this->volume = volume;
    }

    void setNumber(int number){
        this->number = number;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setTitle(std::string title) {
        this->title = title;
    }


    int getVolume() {
        return this->volume;
    }

    int getNumber() {
        return this->number;
    }

    int getYear() {
        return this->year;
    }

    std::string getTitle() {
        return this->title;
    }
};


#endif //LAB4_MAGAZIN_H
