#include "dynarr.h"

template<class T>
dynarr<T>::dynarr(char s) {
    data = new T[s];
    size = s;

}

template<class T>
dynarr<T>::~dynarr() {
    delete[] data;
}

template<class T>
T dynarr<T>::getValue(char index) {
    return data[index];
}

template<class T>
void dynarr<T>::setValue(char index, T value) {
    data[index] = value;
}