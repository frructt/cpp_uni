#include <iostream>
#include "MyVector.h"

int main() {

    double v[3] = {0, 123.123, 0.64};
    MyVector v1(3);

    v1 = v;
    v1[0] = 7.;

    std::cout << v1 << std::endl;

    return 0;

}