#include "circle.h"
#include "ETriangle.h"
#include <vector>

int main() {
    IFigure *a = new Circle();
    std::vector<IFigure*> circles;
    circles.push_back(a);
    a->initFromDialog();
    a->draw();
    std::cout << "Circle's P = " << a->perimeter() << '\n';
    std::cout << "Circle's S = " << a->square() << '\n' << std::endl;

    IFigure *b = new ETriangle;
    std::vector<IFigure*> etriangles;
    etriangles.push_back(b);
    b->initFromDialog();
    b->draw();
    std::cout << "Etriangle's P = " << b->perimeter() << '\n';
    std::cout << "Etriangle's S = " << b->square() << '\n';

    bool q = a == b;
    std::cout << "answer:" << q << ", test ==" << std::endl;

    bool w = a < b;
    std::cout << "answer:" << b << ", test <" << std::endl;
}
