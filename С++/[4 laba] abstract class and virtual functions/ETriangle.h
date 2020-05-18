#pragma once
#include "figure.h"

class ETriangle : public IFigure{
    const char* name = "ETriangle";
    CVector2D a, b, c;
    double weight = 0;

public:
    ETriangle() = default;
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
    friend std::istream&operator>>(std::istream& istream, ETriangle& obj);
};
