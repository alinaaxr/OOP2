#include <iostream>
#include <conio.h>

class Circle {
public:
    int radius, pointcenter;
    Circle() {
        std::cout << "circle() \n";
        radius = 5;
        pointcenter = 1;
    }
    Circle(int r, int center) {
        std::cout << "circle(int radius)\n";
        radius = r;
        pointcenter = center;
    }
    Circle(const Circle& p) {
        std::cout << "circle(const circle &p)\n";
        radius = p.radius;
        pointcenter = p.pointcenter;
    }
    ~Circle() {
        std::cout << "circle() \n";
        std::cout << radius << ", " << pointcenter << "\n";
    }
    void sizeradius(int radius2) {
        this->radius *= 2;
    }

};




int main()
{
    {
        Circle *c = new Circle(10, 2); // вызывается конструктор по умолчанию
        c->sizeradius(1);
        delete c;
      
    }
  
    _getch();
    return 0;
}