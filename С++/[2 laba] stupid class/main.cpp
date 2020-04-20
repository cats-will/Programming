#include <iostream>
#include <cmath>

class Complex {
    double re_;
    double im_;
    friend std::istream& operator>>(std::istream& in, Complex& a);
public:
explicit Complex(const double re, const double im) : re_(re), im_(im) {} //initialization

Complex() : re_(im_), im_(0) {} //default

Complex(const Complex& a) : re_(a.re()), im_(a.im()) {} //copy

Complex& operator=(const Complex& a) { //assignment
    if(this == &a) {
        return *this;
    }
    re_ = a.re_;
    im_ = a.im_;
    return *this;
}

Complex operator+(const Complex& a) {
    Complex temp;
    temp.re_ = this->re_ + a.re_;
    temp.im_ = this->im_ + a.im_;
    return temp;
}

Complex operator*(const Complex& a) {
    Complex temp;
    temp.re_ = this->re_ * a.re_;
    temp.im_ = this->im_ * a.im_;
    return temp;
}

Complex operator*(double& a) {
    Complex temp;
    temp.re_ = this->re_ * a;
    temp.im_ = this->im_ * a;
    return temp;
}

double re() const{
    return this->re_;
}
double im() const{
    return this->im_;
}
double length() const {
    return sqrt(pow(this->re(), 2) + pow(this->im(), 2));
}
};

std::ostream& operator<<(std::ostream& out, const Complex& a) {
    out << a.re() << (a.im() >=0 ? "+" : "") <<  a.im() << "i";
    return out;
}

std::istream& operator>>(std::istream& in, Complex& a) {
    in >> a.re_ >> a.im_;
    return in;
}


int main() {
    Complex d;
    Complex a(-2,-8);
    Complex c(10,88);
    a = d;
    Complex y = a + c;
    std::cout << y;
}

