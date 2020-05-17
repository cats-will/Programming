#include "ETriangle.h"

ETriangle::ETriangle() {
    this->ETriangle::initFromDialog();
}
void ETriangle::draw() {
    cout << "Name: " << classname() <<'\n';
    cout << "Weight: " << mass() <<'\n';
    cout << "Centre: " << position() <<'\n';
    cout << "Memory: " << size() <<'\n';
}
double ETriangle::mass() const {
    return weight;
}
double ETriangle::square() {
    return (pow(sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)), 2) * sqrt(3)) / 4;
}
double ETriangle::perimeter() {
    return 3 * (sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)));
}
unsigned int ETriangle::size() {
    return sizeof(*this);
}
CVector2D ETriangle::position() const {
    CVector2D centre;
    centre.x = (a.x + b.x + c.x) / 3;
    centre.y = (a.y + b.y + c.y) / 3;
    return centre;
}
void ETriangle::initFromDialog() {
    cout << "      Enter X's coords: ";
    cin >> a.x;
    cin >> a.y;
    cout << "      Enter Y's coords: ";
    cin >> b.x;
    cin >> b.y;
    cout << "      Enter Z's coords: ";
    cin >> c.x;
    cin >> c.y;
    cout << "      Enter weight: ";
    cin >> weight;
}
const char* ETriangle::classname() const {
    return name;
}
bool ETriangle::operator==(const IPhysObject& obj) const {
    return mass() == obj.mass();
}
bool ETriangle::operator<(const IPhysObject& obj) const {
    return mass() == obj.mass();
}
std::istream& operator>>(std::istream& istream, ETriangle& obj) {
    return istream >> obj.a.x >> obj.a.y >> obj.b.x >> obj.b.y >> obj.c.x >> obj.c.y >> obj.weight;
}