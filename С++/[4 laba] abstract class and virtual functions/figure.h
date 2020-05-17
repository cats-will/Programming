#pragma once
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

class IGeoFigure {
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;
};

class CVector2D {
public:
    double x;
    double y;
    friend std::ostream& operator<<(std::ostream& ostream, const CVector2D& obj) {
        return ostream << "(" << obj.x << ";" << obj.y << ")";
    }
};

class IPhysObject {
public:
    virtual  double mass() const = 0;
    virtual CVector2D position() const = 0;
    virtual bool operator==(const IPhysObject& obj) const = 0;
    virtual bool operator<(const IPhysObject& obj) const = 0;
};

class IPrintable {
public:
    virtual void draw() = 0;
};

class IDialogInitiable {
    virtual void initFromDialog() = 0;
};

class IBaseCObject {
public:
    virtual const char* classname() const = 0;
    virtual unsigned  int size() = 0;
};

class IFigure : public IGeoFigure, public IPhysObject, public IPrintable, public IDialogInitiable, public IBaseCObject, public CVector2D {};
























