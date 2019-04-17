//
// Created by user on 10.04.2019.
//

#include "MyVector.h"

MyVector::MyVector() : n(0) {}
MyVector::MyVector(int dim): n(dim) {}
MyVector::MyVector(double *ptr, int dim) : n(dim) {}

// Copy constructor
MyVector::MyVector(const MyVector &v, int dim) : n(dim) {
    ptr = v.ptr;
}

MyVector::~MyVector() {
    std::cout << "destructor" << std::endl;
    delete [] ptr;
}

double MyVector::operator[](const int &i) {
    return ptr[i];
}

MyVector &MyVector::operator=(const MyVector &v) {

        for (int i = 0; i < v.n; ++i) {
            this->ptr[i] = ptr[i];
        }
        return *this;
}

MyVector &MyVector::operator=(const double *v) {

    for (int i = 0; i < n; ++i) {
            this->ptr[i] = v[i];
        }
    return *this;
}

std::ostream &MyVector::operator<<(std::ostream &out) {

    for (int i = 0; i < n; ++i) {
        out << this->ptr[i] << std::endl;
    }

    return out;

}

std::istream &MyVector::operator>>(std::istream &in) {

    for (int i = 0; i < n; ++i) {
        in >> this->ptr[i];
    }

    return in;

}

MyVector &MyVector::operator+(MyVector &v) {

    MyVector v1(3);

    for (int i = 0; i < v.n; ++i) {
        this->ptr[i] += v[i];
    }
    return *this;

}