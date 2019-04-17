#include <iostream>
#include "MyVector.h"


int main() {

    double v[3] = {0, 123.123, 2};

    MyVector v3(v, 3);
    v3 = v;
    MyVector v4 = MyVector(v3, 3);
    MyVector v2(3);
    MyVector v1(3);

    std::cout << "v3:" << std::endl;
    v3.operator<<(std::cout);

    v2.operator>>(std::cin);
    std::cout << std::endl << "v2:" << std::endl;
    v2.operator<<(std::cout);

    std::cout << std::endl;

    std::cout << "v2 + v3: " << std::endl;
    (v2+v3).operator<<(std::cout);

    std::cout << std::endl;

//    v1.operator=(v2.operator+(v3));
//    std::cout << "v1: " << std::endl;
//    v1.operator<<(std::cout);



    return 0;
}