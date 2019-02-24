//
// Created by user on 24.02.2019.
//

#include "check.h"
#include "math.h"

int check(float x, float y, float Xc, float Yc, float R) {

    if ((pow(x - Xc, 2) + pow(y - Yc, 2)) < pow(R, 2))
        return 0;
    else
        if ((pow(x - Xc, 2) + pow(y - Yc, 2)) == pow(R, 2))
            return 1;
        else
            return 5;

}