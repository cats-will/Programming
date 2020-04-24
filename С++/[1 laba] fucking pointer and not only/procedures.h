#include <complex>
#ifndef UNTITLED1_PROCEDURES_H
#define UNTITLED1_PROCEDURES_H
void changing(int *a, int *b);
void changing(int &a, int &b);
void cast(double *a);
void cast(double &a);
void complexMultiplication(std::complex <double> *ptr, double *a);
void complexMultiplication(std::complex <double> &ptr, double &a);
void circle(int *x1, int *y1, int *x2, int *y2);
void circle(int &x1, int &y1, int &x2, int &y2);
#endif //UNTITLED1_PROCEDURES_H
