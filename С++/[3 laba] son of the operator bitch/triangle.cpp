#include "triangle.h"

Triangle::Triangle() : x_{0,0}, y_{1,1}, z_{1,0} {}

Triangle::Triangle(Point x, Point y, Point z) : x_(x), y_(y), z_(z) {}

Triangle::Triangle(const Triangle& a) : x_(a.x()), y_(a.y()), z_(a.z()) {}

Triangle::~Triangle() {}

Point Triangle::x() const {
    return this->x_;
}
Point Triangle::y() const {
    return this->y_;
}
Point Triangle::z() const {
    return this->z_;
}
bool Triangle::operator==(Triangle &other) {
    return S() == other.S();
}
bool Triangle::operator!=(Triangle &other) {
    return S() != other.S();
}
bool Triangle::operator<(Triangle &other) {
    return S() < other.S();
}
bool Triangle::operator>(Triangle &other) {
    return S() > other.S();
}
void Triangle::MoveToVector(Vector &other) {
    x_.x += (other.b.x - other.a.x);
    x_.y += (other.b.y - other.a.y);

    y_.x += (other.b.x - other.a.x);
    y_.y += (other.b.y - other.a.y);

    z_.x += (other.b.x - other.a.x);
    z_.y += (other.b.y - other.a.y);
}
double Triangle::S() {
    return 0.5 * ((x_.x - z_.x) * (y_.y - z_.y) - (y_.x - z_.x) * (x_.y - z_.y));
}
std::ostream&operator<<(std::ostream& cout, const Triangle &a) {
    return cout << "{{" << a.x_.x << ';' << a.x_.y << "}, {" << a.y_.x << ';' << a.y_.y << "}, {" << a.z_.x << ';' << a.z_.y << "}}" << std::endl;
}
