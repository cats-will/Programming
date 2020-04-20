#include <iostream>
#include "procedures.h"

int main(){
//  Меняет значения двух входных переменных друг на друга.
    int num1 = 1;
    int num2 = 2;
    changing(&num1, &num2);
    std::cout << num1 << " " << num2 << std::endl;
//  Отбрасывает от вещественного числа его дробную часть.
    double a = 5.976;
    cast(&a);
    std::cout << a << std::endl;
//Умножает комплексную переменную на второй аргумент процедуры – вещественное число.
    std::complex< double > cval ( 4.0, 1.0 );
    double c = 5.67;
    complexMultiplication(&cval, &c);
    std::cout << cval << std::endl;
//Сдвигает окружность на заданный вектор
    int x = 4;
    int shift_x = -3;
    int y = 9;
    int shift_y = 7;
    circle(x, y, shift_x, shift_y);
    std::cout << x << " " << y << std::endl;
}
