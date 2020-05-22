#include "circle.h"
#include "ETriangle.h"
#include <vector>

int main() {
    IFigure *a = new Circle();
    IFigure *b = new ETriangle;
    std::vector<IFigure*> figures;
    figures.push_back(a);
    figures.push_back(b);
    
    a->initFromDialog();
    a->draw();
    std::cout << "Circle's P = " << a->perimeter() << '\n';
    std::cout << "Circle's S = " << a->square() << '\n' << std::endl;

    b->initFromDialog();
    b->draw();
    std::cout << "Etriangle's P = " << b->perimeter() << '\n';
    std::cout << "Etriangle's S = " << b->square() << '\n';

    bool q = a == b;
    std::cout << "answer:" << q << ", test ==" << std::endl;

    bool w = a < b;
    std::cout << "answer:" << b << ", test <" << std::endl;
}
