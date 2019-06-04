#include <iostream>
#include <vector>
#include <typeinfo>

#include "BibliographicItem.h"
#include "LibraryItem.h"
#include "Book.h"
#include "Magazin.h"
#include "URL.h"

int main() {

    Book book("Author", "Title", "City", "Publisher", 1990, 123);
    Magazin mag("Title", 123, 1990, 1);
    URL url("Title", "https://make-my-link-longer.glitch.me");


    std::cout << book.getInfo() << std::endl;
    std::cout << mag.getInfo() << std::endl;
    std::cout << url.getInfo() << std::endl;

    std::cout << "book inv number " << book.getInvNumber() << std::endl;
    std::cout << "magazin inv number " << mag.getInvNumber() << std::endl;
    std::cout << "magazin inv number " << mag.getInvNumber();

    return 0;
}