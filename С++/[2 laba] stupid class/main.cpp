#include <iostream>
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

