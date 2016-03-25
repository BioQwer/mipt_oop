// region Mantra

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
// endregion

class C {
public:
    double re, im;

    C() {
        re = 0;
        im = 0;
    }

    C(double re_) {
        re = re_;
        im = 0;
    }

    C(double re_, double im_) {
        re = re_;
        im = im_;
    }

    C operator+(C right) {
        return C((this->re + right.re), this->im + right.im);
    }

    C operator-(C right) {
        return C((this->re - right.re), this->im - right.im);
    }

    friend C operator*(const C &al, const C &right) {
        double a, b, c, d;
        a = al.re;
        b = al.im;
        c = right.re;
        d = right.im;
        return C((a * c - b * d), (b * c + a * d));
    }

    friend C operator/(const C &al, const C &right) {
        double a, b, c, d;
        a = al.re;
        b = al.im;
        c = right.re;
        d = right.im;
        return C((a * c + b * d) / (c * c + d * d), (b * c - a * d) / (c * c + d * d));
    }

    bool operator==(C right) {
        return this->re == right.re && this->im == right.im;
    }

    bool operator!=(C right) {
        return !operator==(right);
    }

    friend std::ostream &operator<<(std::ostream &ostream1, const C &c) {
        ostream1 << c.re << " " << c.im;
        return ostream1;
    }

    double abs() {
        return sqrt(re * re + im * im);
    }

    C operator+(double right) {
        return C((this->re + right), this->im);
    }

    C operator-(double right) {
        return C((this->re - right), this->im);
    }

    C operator*(double right) {
        return C((this->re * right), this->im);
    }

    C operator/(int right) {
        return C(this->re / right, this->im);
    }

    C operator+(int right) {
        return C((this->re + right), this->im);
    }

    C operator-(int right) {
        return C((this->re - right), this->im);
    }

    C operator*(int right) {
        return C((this->re * right), this->im*right);
    }
};

int main() {
    C z(-8, 7), z2(3, 4), z3(-8, 7);
    cout << z / z2 << endl;

    C z4 = z3 / z2 + z * z2;
    cout << z4.re << " " << z4.im << endl;//-51.84 -8.88

    cout <<"deb"<<endl<< 1 / (z4 * 3 + 7); //0.00652322 0.00117007
    return 0;
}

