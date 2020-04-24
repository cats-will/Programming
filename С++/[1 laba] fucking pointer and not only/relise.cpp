#include "procedures.h"


void changing(int *a, int *b){
   int t = *a;
   *a = *b;
   *b = t;
}

void changing(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void cast(double *a){
    int b;
    b = (int)*a;
    *a = b;
}

void cast(double &a){
    int b;
    b = (int)a;
    a = b;
}

void complexMultiplication(std::complex <double> *ptr, double *a){
    std::complex <double> pt = *ptr * *a;
    *ptr = pt;
}

void complexMultiplication(std::complex <double> &ptr, double &a){
    std::complex <double> pt = ptr * a;
    ptr = pt;
}

void circle(int *x1, int *y1, int *x2, int *y2){
    *x1 = *x1 + *x2;
    *y1 = *y1 + *y2;
}

void circle(int &x1, int &y1, int &x2, int &y2){
    x1 = x1 + x2;
    y1 = y1 + y2;
}
