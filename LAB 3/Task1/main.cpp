#include <iostream>
#include "dynarr.h"


using namespace std;

int main() {

    char c;
    char input, size = 6;
    dynarr<char> di(size);

    for (char i = 0; i < size; i++) {
        cout << "Enter the array Charecter " << i + 1 << ": ";
        cin >> input;
        di.setValue(i, input);
    }
    cout << endl << "You have entered: " << endl;
    for (char i = 0; i < size; i++) {
        cout << di.getValue(i) << "";
    }

    return 0;
}