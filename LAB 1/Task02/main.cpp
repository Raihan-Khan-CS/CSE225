#include<iostream>

using namespace std;

int main() {
    int r, c, i, j; //r=row, c=column
    cout << "Enter the number of row: ";
    cin >> r;
    cout << "Enter the number of column: " ;
    cin >> c;
    cout << "Insert array elements: "<< endl;
    int **a = new int *[r]; //a=array
    for (i = 0; i < r; ++i) {
        a[i] = new int[c];
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cout << a[i][j] << endl;
        }
    }

    delete[] a; //De-allocate the array

}
