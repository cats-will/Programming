#include "array.h"

Array::Array(int n = 1) {
    this->size = n;
    arr = new int[size];
    for(int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

Array::~Array() {
    delete[] arr;
}

int Array::array_len() const {
    return size;
}

Array operator+(Array &arr1, Array &arr2) {
    int n = arr1.array_len()+arr2.array_len();
    Array temp(n);
    for(int i = 0; i < n; i++) {
        if(i < arr1.array_len()) {
            temp[i] = arr1[i];
        }
        else {
            temp[i] = arr2[i - arr1.array_len()];
        }
    }
    return temp;
}

bool Array::operator==(Array &arr) {
    return array_len() == arr.array_len();
}

bool Array::operator!=(Array &arr) {
    return array_len() != arr.array_len();
}

bool Array::operator>(Array &arr) {
    return array_len() > arr.array_len();
}

bool Array::operator<(Array &arr){
    return array_len() < arr.array_len();
}

int& Array::operator[](int index) {
    return arr[index];
}

std::ostream& operator<<(std::ostream& cout, Array &arr) {
    cout << "Massive = [";
    for(int i = 0; i < arr.array_len(); i++) {
        cout << arr[i];
        if(i < (arr.array_len() - 1)) {
            cout << ",";
        }
    }
    cout << "]" << std::endl;
    return cout;
}
