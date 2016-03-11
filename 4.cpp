#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class Coord {
public:
    int x;
    int y;
};

// Класс треугольник
class Triangle {
public:
    Coord p1, p2, p3;
};

Coord getPoint() {
    Coord res;
    cin >> res.x >> res.y;
    return res;
}

void printPoint(Coord a) {
    cout << a.x << " " << a.y;
}

void getTri(Triangle &tri) {
    tri.p1 = getPoint();
    tri.p2 = getPoint();
    tri.p3 = getPoint();
}

int cmp(Triangle a, Triangle b) {
    bool isEqual = true;

    if ((a.p1.x - a.p2.x != b.p1.x - b.p2.x) || (a.p1.y - a.p2.y != b.p1.y - b.p2.y))
        isEqual = false;
    if ((a.p2.x - a.p3.x != b.p2.x - b.p3.x) || (a.p2.y - a.p3.y != b.p2.y - b.p3.y))
        isEqual = false;
    if ((a.p3.x - a.p1.x != b.p3.x - b.p1.x) || (a.p3.y - a.p1.y != b.p3.y - b.p1.y))
        isEqual = false;

    return isEqual;
}