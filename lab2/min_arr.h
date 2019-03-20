//
// Created by user on 06.03.2019.
//

#ifndef LAB2_MIN_ARR_H
#define LAB2_MIN_ARR_H

template <typename T>
T min_arr(T a, T b, T end) {

    int *lambda;
    while (b < end) {
        lambda = [&]() -> int {
            (*a < *b) ? a : b;
        };

        return min_arr(lambda, b + 1, end);
    }
}

#endif //LAB2_MIN_ARR_H
