#include <iostream>
#include <vector>
#include <functional>
//#include "min_arr.h"

typedef std::vector<int>::iterator iter_t;
typedef iter_t (*func_t)(iter_t, iter_t);

template <typename T, typename S>
S min_arr(S (*lambda)(T, S), T begin, T end) {

    auto acc = begin;

    while (begin < end) {
        acc = lambda(acc, begin);
        begin++;
    }

    return acc;
}


int main() {

    int n;

    std::cin >> n;

    std::vector<int> arr(n);

    auto end = arr.end();
    for (auto it = arr.begin(); it < end; it++)
        std::cin >> *it;

//    lambda min start here
    func_t min_l = [](iter_t acc, iter_t b) -> iter_t {
        return ((*acc < *b) ? acc : b);
    };
//    end here

//    lambda max start here
    func_t max_l = [](iter_t acc, iter_t b) -> iter_t {
        return ((*acc > *b) ? acc : b);
    };
//    end here

//    lambda sum start here
    func_t sum_l = [](iter_t acc, iter_t b) -> iter_t {
        return ((*acc < *b) ? acc : b);
    };
//    end here

//    lambda plus start here
    func_t plus_l = [](iter_t acc, iter_t b) -> iter_t {
        return ((*acc < *b) ? acc : b);
    };
//    end here

    std::cout << *min_arr(max_l, arr.begin(), arr.end());

    return 0;
}

