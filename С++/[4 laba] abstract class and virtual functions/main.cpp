#include "circle.h"
#include "ETriangle.h"
#include <vector>

int main() {
    IFigure *a = new Circle();
    IFigure *b = new ETriangle;
    std::vector<IFigure*> figures;
    figures.push_back(a);
    figures.push_back(b);
    
    figures[0]->initFromDialog();
    figures[0]->draw();
    std::cout << "Circle's P = " << a->perimeter() << '\n';
    std::cout << "Circle's S = " << a->square() << '\n' << std::endl;

    figures[1]->initFromDialog();
    figures[1]->draw();
    std::cout << "Etriangle's P = " << b->perimeter() << '\n';
    std::cout << "Etriangle's S = " << b->square() << '\n';

    bool q = figures[0] == figures[1];
    std::cout << "answer:" << q << ", test ==" << std::endl;

    bool w = figures[0] < figures[1];
    std::cout << "answer:" << w << ", test <" << std::endl;
}
