#ifndef PROGA3_SOMETHING_H
#define PROGA3_SOMETHING_H

#include <cmath>
#include <iostream>
struct Point {
    double x;
    double y;
};

struct Vector {
    Point a;
    Point b;
};

class Triangle {
    Point x_;
    Point y_;
    Point z_;
public:
    Triangle();
    Triangle(const Triangle& a);
    Triangle(Point x, Point y, Point z);
    Point x() const;
    Point y() const;
    Point z() const;
    bool operator==(Triangle & other);
    bool operator!=(Triangle & other);
    bool operator<(Triangle & other);
    bool operator>(Triangle & other);
    friend std::ostream&operator<<(std::ostream& cout, const Triangle &a);
    void MoveToVector(Vector & other);
    double S();
    ~Triangle();
};
#endif 
