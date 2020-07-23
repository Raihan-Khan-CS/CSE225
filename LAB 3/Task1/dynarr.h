//
// Created by Raihan Khan on 18/7/20.
//

#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template<class T>
class dynarr {
private:
    T *data;
    int size;
public:
    dynarr(char);

    ~dynarr();

    void setValue(char, T);

    T getValue(char);


};

#include "dynarr.tpp"

#endif // DYNARR_H_INCLUDED