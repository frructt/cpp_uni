//
// Created by user on 29.05.2019.
//

#include "URL.h"

URL::URL() {
    title = "";
    url = "";
}

URL::URL(std::string title, std::string url) {
    setTitle(title);
    setUrl(url);
}

URL::URL(const URL & url) {
    setTitle(url.title);
    setTitle(url.url);
}