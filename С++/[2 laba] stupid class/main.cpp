<<<<<<< HEAD
#include <iostream>
=======
>>>>>>> 0d85c038aa6ad3d49fb1e0142adca0eba49fa6f9
#include "Complex.h"

int main() {
    Complex d;
    Complex a(-2,-8);
    Complex c(10,88);
    a = d;
    Complex y = a + c;
    std::cout << y;
}
