//
// Created by Raihan Khan on 16/7/20.
//

#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int,int,int);
    int getValue(int,int);
    void allocate(int,int);

private:
    int **data;
    int row,col;
};
#include"2Ddynarr.tpp"
#endif // DYNARR_H_INCLUDED