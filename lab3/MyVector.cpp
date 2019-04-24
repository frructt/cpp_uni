//
// Created by user on 10.04.2019.
//

#include "MyVector.h"

MyVector::MyVector() : n(0) {
    ptr = new double [0];
}
MyVector::MyVector(int dim): n(dim) {
    ptr = new double [n];
}
MyVector::MyVector(double *ptr, int dim) : n(dim) {

    for (int i = 0; i < n; ++i) {
        this->ptr[i] = ptr[i];
    }

}

// Copy constructor
MyVector::MyVector(const MyVector &v) : n(v.n) {

    if (n <= v.n)
        for (int i = 0; i < n; ++i) {
            this->ptr[i] = 0.;
            this->ptr[i] = v.ptr[i];
        }
    else {
        int j = 0;
        for (int i = 0; i < v.n; ++i) {
            this->ptr[i] = 0.;
            this->ptr[i] = v.ptr[i];
            j = i;
        }

        for (int k = j; k < n; ++k) {
            this->ptr[k] = 0.;
        }
    }
}

MyVector::~MyVector() {
    std::cout << "destructor" << std::endl;
    delete [] ptr;
}

double &MyVector::operator[](const int &i) {
    return ptr[i];
}

MyVector &MyVector::operator=(const MyVector &v) {

    if (n <= v.n) {
        for (int i = 0; i < n; ++i) {
            this->ptr[i] = ptr[i];
        }
    } else {
        int  j = 0;
        for (int i = 0; i < v.n; ++i) {
            this->ptr[i] = ptr[i];
            j = i;
        }
        for (int k = j; k < n; ++k) {
            this->ptr[k] = ptr[k];
        }
    }
    return *this;
}

MyVector &MyVector::operator=(const double *v) {

    for (int i = 0; i < n; ++i) {
        this->ptr[i] = v[i];
    }

    return *this;

}

std::ostream &operator<<(std::ostream &out, MyVector &v) {

    for (int i = 0; i < v.get_n(); ++i) {
        out << v[i] << std::endl;
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
        v1[i] = this->ptr[i];
        this->ptr[i] = 0;
        this->ptr[i] = v1[i] + v[i];
    }

    return *this;

}