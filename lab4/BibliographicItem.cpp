//
// Created by user on 29.05.2019.
//

#include "BibliographicItem.h"

BibliographicItem::BibliographicItem() {
}

std::ostream& operator << (std::ostream &out, BibliographicItem &bibItem) {

    out << bibItem.getInfo() << std::endl;

    return out;
}