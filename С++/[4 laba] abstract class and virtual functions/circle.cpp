#include "circle.h"

const double pi = M_PI;

void Circle::draw() {
    cout << "Name: " << classname() << '\n';
    cout << "Weight: " << mass() << '\n';
    cout << "Radius: " << r << '\n';
    cout << "Centre: " << position() << '\n';
    cout << "Memory: " << size() <<'\n';
}
double Circle::mass() const {
    return weight;
}
double Circle::square() {
    return pi * pow(r, 2);
}
double Circle::perimeter() {
    return 2 * pi * r;
}
unsigned int Circle::size() {
    return sizeof(*this);
}
CVector2D Circle::position() const {
    return centre;
}
void Circle::initFromDialog() {
    cout << "      Enter centre's coords: ";
    cin >> centre.x;
    cin >> centre.y;
    cout << "      Enter radius: ";
    cin >> r;
    cout << "      Enter weight: ";
    cin >> weight;
    cout << '\n';
}
const char* Circle::classname() const {
    return name;
}
bool Circle::operator==(const IPhysObject& obj) const {
    return mass() == obj.mass();
}
bool Circle::operator<(const IPhysObject& obj) const {
    return mass() < obj.mass();
}
std::istream&operator>>(std::istream& istream, Circle& a) {
    return istream >> a.centre.x >> a.centre.y >> a.r >> a.weight;
}
