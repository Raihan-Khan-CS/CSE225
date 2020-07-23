//
// Created by Raihan Khan on 18/7/20.
//

#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {
public:
    Complex();

    Complex(float, float);

    Complex operator+(Complex);

    void Print();

private:
    double Real, Imaginary;


};

#include"Complex.tpp"

#endif // COMPLEX_H_INCLUDED
