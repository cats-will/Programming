#include "something.h"

int main() {

    Triangle a({8,0},{0,0},{1,1});
    Triangle c({3,4},{3,5},{8,9});
    Triangle h({1,2},{4,6},{3,3});

    bool b = a == c;
    std::cout << "answer:" << b << ", test ==" << std::endl;
    bool f = a != c;
    std::cout << "answer:" << f << ", test !=" << std::endl;
    bool p = a > c;
    std::cout << "answer:" << p << ", test >" << std::endl;
    bool q = a < c;
    std::cout << "answer:" << q << ", test <" << std::endl;

    Vector vector{{1,2},{1,8}};
    a.MoveToVector(vector);
    std::cout << "Triangle + vector = " << a << std::endl;
}
