#pragma once

template<class T>
const T max(const T* arr, const int size) {
    T max = arr[0];
    for(int i = 0; i < size; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}