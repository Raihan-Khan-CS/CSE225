#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    Fraction f3; //f3=result
    cout << "The results are: " << endl;

    f3 = f1 * f2;
    f3.print();

    f3 = f1 + f2;
    f3.print();

    f3 = f1 - f2;
    f3.print();

    f3 = f1 / f2;
    f3.print();

    cout << endl << "Logically: " << endl;

    if (f1 < f2)
        cout << "f1 is less than f2" << endl;
    if (f1 > f2)
        cout << "f1 is greater than f2" << endl;

    if (f1 == f2)
        cout << "f1 & f2 is equal" << endl;
    if (f1 != f2)
        cout << "f1 & f2 is not not equal" << endl;
    if (f1 <= f2)
        cout << "f1 is less than or equal to f2" << endl;
    if (f1 >= f2)
        cout << "f1 is greater than or equal to f2" << endl;


    return 0;
}
