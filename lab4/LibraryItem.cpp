//
// Created by user on 29.05.2019.
//

#include "LibraryItem.h"

int LibraryItem::cnt = 0;

LibraryItem::LibraryItem() : BibliographicItem(){

    invNumber = cnt++;
}