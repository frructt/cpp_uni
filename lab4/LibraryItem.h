//
// Created by user on 29.05.2019.
//

#ifndef LAB4_LIBRARYITEM_H
#define LAB4_LIBRARYITEM_H


#include "BibliographicItem.h"
#include <vector>

class LibraryItem : public BibliographicItem {

private:
    int invNumber;
    bool taken;

    static int cnt;

//    std::vector <std::string> vec_str;

public:
    
    LibraryItem();
//    LibraryItem(std::string, std::string, std::string);

    bool isAvailable(){
        if (taken) {
            return false;
        } else {
            return true;
        }
    }

    int getInvNumber() {
        return invNumber;
    }

    void take() {
        if (taken) {
            throw "Exception. Already taken";
        }
        taken = true;
    }

    void _return() {
        if (!taken) {
            throw "Exception. Already return";
        }
        taken = false;
    }
};


#endif //LAB4_LIBRARYITEM_H
