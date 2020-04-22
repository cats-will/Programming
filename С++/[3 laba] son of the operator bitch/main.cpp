#include "array.h"
#include "triangle.h"

int main() {
    Array arr1(3);
    Array arr2(4);
    bool qwerty = arr1 == arr2;
    std::cout << "                         class Array" << std::endl;
    std::cout << "answer:" << qwerty << ", test ==" << std::endl;
    bool qwert = arr1 != arr2;
    std::cout << "answer:" << qwert << ", test !=" << std::endl;
    bool qwer = arr1 < arr2;
    std::cout << "answer:" << qwer << ", test <" << std::endl;
    bool qwe = arr1 > arr2;
    std::cout << "answer:" << qwe << ", test >" << std::endl;
    Array arr = arr1 + arr2;
    std::cout << arr << std::endl;


    Triangle a({8,0},{0,0},{1,1});
    Triangle c({3,4},{3,5},{8,9});
    Triangle h({1,2},{4,6},{3,3});
    bool b = a == c;
    std::cout << "                         class Triangle" << std::endl;
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
