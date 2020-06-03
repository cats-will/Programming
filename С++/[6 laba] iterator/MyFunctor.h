#pragma once

template <class T>
class Equal {
public:
    T operator() (T& a, T& b)  {
        return a == b;
    }
};

template <class T>
class EvenNum {
public:
    T operator() (T& a)  {
        return a % 2 == 0;
    }
};
