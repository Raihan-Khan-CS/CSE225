#include "Complex.h"
#include <string>

using namespace std;

Complex::Complex() {
    Real = 0;
    Imaginary = 0;
}

Complex::Complex(float r, float i) {
    Real = r;
    Imaginary = i;
}

Complex Complex::operator+(Complex a) {
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

void Complex::Print() {
    cout << Real << " + " << Imaginary << "i" << endl;

}