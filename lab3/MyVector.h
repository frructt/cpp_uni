//
// Created by user on 10.04.2019.
//

#ifndef LAB3_MYVECTOR_H
#define LAB3_MYVECTOR_H

#include <vector>
#include <iostream>

class MyVector {
private:
    const int n;
    double *ptr = new double[n];

public:
    MyVector();
    MyVector(int);
    MyVector(double *ptr, int);
    MyVector(const MyVector &, int); // copy construct
    ~MyVector();

    double operator[](const int &);
    MyVector &operator=(const MyVector &);
    MyVector &operator=(const double *);

    std::ostream &operator<<(std::ostream &);
    std::istream &operator>>(std::istream &);

    MyVector &operator+(MyVector &);

};


#endif //LAB3_MYVECTOR_H
