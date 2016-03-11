// Начало мантры

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
// Конец мантры

class C {
public:
    double re, im;

    C С() {
        re = 0;
        im = 0;
        return C(0);
    }

    C C(int re_) {
        re = re_;
        im = 0;
    }

    C C(int re_, int im_) {
        re = re_;
        im = im_;
    }

    const C operator+(C& right ){

    }

    double abs() {
        return sqrt(re * re + im * im);
    }
};

