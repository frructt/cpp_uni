//
// Created by user on 29.05.2019.
//

#ifndef LAB4_LIBRARYITEM_H
#define LAB4_LIBRARYITEM_H


#include "BibliographicItem.h"


class LibraryItem : BibliographicItem {

private:
    int invNumber;
    bool taken;
//    static int cntItems;
public:

//    LibraryItem();
//    LibraryItem(std::string);
//    LibraryItem(const LibraryItem &);

    bool isAvailable(){
        if (taken) {
            return false;
        } else {
            return true;
        }
    }

    int getInvNumber() {
        invNumber = BibliographicItem::getCntItems();
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
