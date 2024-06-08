#include <iostream>
#include <string>
using namespace std;
class Square
{
public:
    Square(double side);
    void set_side(double arg);
    void print();

private:
    double side;
    double area;
};

Square::Square(double side)
{
    this->side = side;
    this->area = side * side;
}

void Square::print()
{
    cout << "Square: side=" << this->side << " area=" <<this->area << endl;
}

void Square::set_side(double num) {
    if(num>=0)
    {
        side=num;
        area=side*side;
    }
}

int main()
{
    Square s(4);
    s.print();
    s.set_side(2.0);
    s.print();
    s.set_side(-33.0);
    s.print();
    return 0;
}