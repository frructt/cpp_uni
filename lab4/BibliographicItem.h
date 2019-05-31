//
// Created by user on 29.05.2019.
//

#ifndef LAB4_BIBLIOGRAPHICITEM_H
#define LAB4_BIBLIOGRAPHICITEM_H

//#include <string>
#include <iostream>

class BibliographicItem {
private:
    static int cntItems;

public:

    BibliographicItem();

    static int getCntItems() {
        return cntItems;
    }

    virtual std::string getInfo() = 0;

private:
    friend std::ostream &operator<<(std::ostream &, const BibliographicItem &);
};


#endif //LAB4_BIBLIOGRAPHICITEM_H
