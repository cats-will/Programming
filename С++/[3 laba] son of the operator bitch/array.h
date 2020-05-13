#ifndef PROGA_ARRAY_H
#define PROGA_ARRAY_H

#include <iostream>

class Array {
    int size;
    int* arr;
public:
    explicit Array(int n);
    ~Array();
    int array_len() const;
    int& operator[](int index);
    bool operator==(Array &arr);
    bool operator!=(Array &arr);
    bool operator>(Array &arr);
    bool operator<(Array &arr);
    friend std::ostream& operator<<(std::ostream& cout, Array &arr);
};
Array operator+(Array &arr1, Array &arr2);

#endif PROGA_ARRAY_H
