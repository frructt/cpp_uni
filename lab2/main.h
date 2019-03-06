//
// Created by user on 06.03.2019.
//

#ifndef LAB2_MAIN_H
#define LAB2_MAIN_H

template <typename T>
T min_ab(T a, T b) {
    return (*a < *b) ? a : b;
}

template <typename T>
T minArr(T it, T end) {

    int min = INT32_MAX;

    if (it < end) {
        minArr(it + 1, end);

    } else {

        if (min < *it)
            min = *it;
    }

    return min;
}

#endif //LAB2_MAIN_H
