//
// Created by user on 29.05.2019.
//

#include "Magazin.h"

Magazin::Magazin() {
    volume = NULL;
    number = NULL;
    year = NULL;
    title = "";
}

Magazin::Magazin(std::string title, int volume, int number, int year) {
    setVolume(volume);
    setNumber(number);
    setYear(year);
    setTitle(title);
}

Magazin::Magazin(const Magazin & magazin) {
    setVolume(magazin.volume);
    setNumber(magazin.number);
    setYear(magazin.year);
    setTitle(magazin.title);
}