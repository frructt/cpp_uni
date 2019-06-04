cmake_minimum_required(VERSION 3.13)
project(lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab4 main.cpp BibliographicItem.cpp BibliographicItem.h LibraryItem.cpp LibraryItem.h Book.cpp Book.h Magazin.cpp Magazin.h URL.cpp URL.h)