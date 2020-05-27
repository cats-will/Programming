#pragma once
#include <iostream>
#include "MyException.h"

template <int N, class T>
class Stack {
    T stack[N];
    int size{};
    int top = 0;
public:
    int get_top() const;
    int get_size() const;
    void push(const T& value);
    void pop();
    void printStack();
};

template <int N, class T>
int Stack <N, T>::get_top() const {
    return top;
}

template <int N, class T>
int Stack <N, T>::get_size() const {
    return size;
}

template < int N, class T>
void Stack <N, T>::push(const T &value) {
    if(top >= size)
        throw MyException("Stack is overflow",1);
    stack[top++] = value;
}

template <int N, class T>
void Stack <N, T>::pop() {
    if(N <= 0)
        throw MyException("Nothing to delete", 2);
    stack[--top];
}

template <int N, class T>
void Stack <N, T>::printStack() {
    for(int i = top - 1; i >= 0; i--) {
        std::cout << stack[i] << ' ';
    }
}