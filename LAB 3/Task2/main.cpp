#include <iostream>
#include "Complex.h"

using namespace std;

int main() {

    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    Complex res;
    res = c1 + (c2);
    cout << "Addition is: " << endl;
    res.Print();
    cout << endl;

}
