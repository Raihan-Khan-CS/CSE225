#include "Fraction.h"

#include <iostream>

using namespace std;

int main(void)

{

Fraction f1;
Fraction f2(3,5);
//f1.setNumerator(2);
//f1.setDenominator(6);


Fraction f3;

f3= f1 + f2;
f3.print();

f3= f1 * f2;
f3.print();

f3= f1 / f2;
f3.print();

f3= f1 - f2;
f3.print();



}
