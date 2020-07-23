#include <iostream>
#include"2Ddynarr.h"
using namespace std;

int main()
{
    int row,col,input;
    dynArr d1();
    dynArr d2(5, 5);

    cout<<"Enter the size of Row: ";
    cin >> row;
    cout<<"Enter the size of Column: ";
    cin>>col;

    d2.allocate(row, col);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Insert array content for A["<<i<<"]["<<j<<"]: ";
            cin >> input;
            d2.setValue(i,j,input);
        }
    }
    cout<<endl<<"Output of the array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << d2.getValue(i,j) << " ";
        }
        cout << endl;
    }
    d2.~dynArr();
    return 0;
}
