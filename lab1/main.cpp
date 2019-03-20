//
// Created by user on 20.02.2019.
//
#include "check.h"
#include <iostream>
#include <tuple>

int main () {

    float Xc, Yc, Rc;
    std::string figure_t;

    std::cin >> Xc >> Yc >> Rc;
    std::cin >> figure_t;

    if (figure_t == "triangle") {
        float x, y;
        std::pair<float, float> Point(x, y);
        std::tuple<std::string, float, float, float> t;
        t = make_tuple(figure_t, x, y, Rc);


        int cnt = 0;
        for (int i = 0; i < 3; ++i) {
            std::cin >> Point.first >> Point.second;

            cnt += check(Point.first, Point.second, Xc, Yc, Rc);

            if (check(Point.first, Point.second, Xc, Yc, Rc) == 0){
                std::cout << "INSIDE";
                break;
            }
            else
                if (check(Point.first, Point.second, Xc, Yc, Rc) == 5) {
                    std::cout << "OUTSIDE";
                    break;
                }
        }

        if (cnt == 3)
            std::cout << "TOUCH";
    }
    else
        if (figure_t == "rectangle") {
            float x, y;
            std::pair<float, float> Point(x, y);

            int cnt = 0;
            for (int i = 0; i < 3; ++i) {
                std::cin >> Point.first >> Point.second;

                cnt += check(Point.first, Point.second, Xc, Yc, Rc);

                if (check(Point.first, Point.second, Xc, Yc, Rc) == 0){
                    std::cout << "INSIDE";
                    break;
                }
                else
                if (check(Point.first, Point.second, Xc, Yc, Rc) == 5) {
                    std::cout << "OUTSIDE";
                    break;
                }
            }

            if (cnt == 4)
                std::cout << "TOUCH";
        }
        else
            std::cout << "INCORRECT INPUT DATA";



    return 0;
}