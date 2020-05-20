#include "Complex.h"
#include <cmath>

Complex::Complex(const double re, const double im) : re_(re), im_(im) {}

Complex::Complex() : re_(im_), im_(0) {} //default

Complex::Complex(const Complex& a) : re_(a.re()), im_(a.im()) {}

Complex& Complex::operator=(const Complex& a) { //assignment
    if(this == &a) {
        return *this;
    }
    re_ = a.re_;
    im_ = a.im_;
    return *this;
}

Complex Complex::operator+(const Complex& a) {
    Complex temp;
    temp.re_ = this->re_ + a.re_;
    temp.im_ = this->im_ + a.im_;
    return temp;
}

Complex Complex::operator*(const Complex& a) {
    Complex temp;
    temp.re_ = this->re_ * a.re_;
    temp.im_ = this->im_ * a.im_;
    return temp;
}

Complex Complex::operator*(double& a) {
    Complex temp;
    temp.re_ = this->re_ * a;
    temp.im_ = this->im_ * a;
    return temp;
}

double Complex::re() const{
    return this->re_;
}

double Complex::im() const{
    return this->im_;
}

double Complex::length() const {
    return sqrt(pow(this->re(), 2) + pow(this->im(), 2));
}

std::istream& operator>>(std::istream& in, Complex& a) {
    in >> a.re_ >> a.im_;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Complex& a) {
    out << a.re() << (a.im() >= 0 ? "+" : " ") <<  a.im() << "i";
    return out;
}