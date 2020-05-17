#pragma once
#include "figure.h"

class Circle : public IFigure {
    CVector2D centre;
    double r;
    double weight = 0;
    const char* name = "Circle";
public:
    Circle();
    void draw() override;
    double mass() const override;
    double square() override;
    double perimeter() override;
    unsigned int size() override;
    CVector2D position() const override;
    void initFromDialog() override;
    const char* classname() const override;
    bool operator==(const IPhysObject& obj) const override;
    bool operator<(const IPhysObject& obj) const override;
    friend std::istream&operator>>(std::istream& istream, Circle& a);
};

