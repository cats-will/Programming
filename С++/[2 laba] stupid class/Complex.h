#pragma once
#include <iostream>

class Complex {
    double re_;
    double im_;
    friend std::istream& operator>>(std::istream& in, Complex& a);
    friend std::ostream& operator<<(std::ostream& out, const Complex& a);
public:
    explicit Complex(const double re, const double im);
    Complex();
    Complex(const Complex& a);
    Complex& operator=(const Complex& a);
    Complex operator+(const Complex& a);
    Complex operator*(const Complex& a);
    Complex operator*(double& a);
    double re() const;
    double im() const;
    double length() const;
};




