//
// Created by user on 29.05.2019.
//

#ifndef LAB4_URL_H
#define LAB4_URL_H

#include "BibliographicItem.h"

class URL : public BibliographicItem {
private:
    std::string title, url;

public:
    URL();
    URL(std::string, std::string);
    URL(const URL &);

    std::string getInfo() override {
        std::string info = title + " URL: " + url;
        return info;
    }

    void setTitle(std::string title) {
        this->title = title;
    }

    void setUrl(std::string url) {
        this->url = url;
    }

    std::string getTitle() {
        return this->title;
    }

    std::string getUrl() {
        return this->url;
    }

};


#endif //LAB4_URL_H
