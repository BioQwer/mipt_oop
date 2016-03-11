/*
  В начале программы мантра
*/
// Начало мантры

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class Lin {
public:
    int cm; // сантиметры
    int mm; // милиметры
};

void printLin(Lin a) {
    cout<<a.cm<<" "<<a.mm<<endl;
}

Lin covertToLin(int kletki) {
    Lin a;
    a.cm = kletki / 2;
    a.mm = (kletki % 2)*5 ;
    return a;
}


int main() {

}