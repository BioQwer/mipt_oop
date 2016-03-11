/*
  В начале программы мантра
*/
// Начало мантры

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
// Конец мантры

class Time {
public:
    int hour;
    int min;
};

Time add(Time a, int min) {

// Здесь нужно написать код
    Time res;
    res.hour = a.hour;
    res.min = a.min + min;

    if (res.min >= 60) {
        int hoursAdd = (res.min / 60);
        res.hour = res.hour + hoursAdd;
        res.min = res.min % 60;
    }
    if (res.hour >= 24) {
        res.hour = res.hour % 24;
    }
    return res;
}


int main() {
    Time a, newtime;
    int min;

    // Получить a  из консоли 


    cin >> a.hour >> a.min;
    // Получить min  из консоли

    cin >> min;
    newtime = add(a, min);
    cout << newtime.hour << ":" << newtime.min << endl;
}