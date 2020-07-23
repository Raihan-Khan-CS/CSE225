#include<iostream>

using namespace std;

int main() {
    int i, n;
    cout << "Give array size: ";
    cin >> n;
    int *a = new int[n];

    for (i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
    }
    cout << endl;
    for (i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cout << a[i] << endl;
    }

    delete[] a; //De-allocate the array

}
