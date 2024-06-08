#include <iostream>
using namespace std;
class AdHocSquare
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();
    void print();
private:
    double side;
    double area;
};

void AdHocSquare::set_side(double side) {
    this->side=side;
}

double AdHocSquare::get_area() {
    this->area = side*side;
    return area;
}

AdHocSquare::AdHocSquare(double side) {
    set_side(side);
    get_area();
}
void AdHocSquare::print()
{
    cout << "Square: side=" << this->side << " area=" <<this->area << endl;
}

class LazySquare
{
public:

    LazySquare(double side) {
        set_side(side);
        get_area();
    }

    void set_side(double side) {
        side_changed=true;
        this->side=side;
    }

    double get_area() {
        if(side_changed)
        {
            area=side*side;
            side_changed= false;
        }
        return area;
    }

    void print()
    {
        cout << "Square: side=" << this->side << " area=" <<this->area << endl;
    }

private:
    double side;
    double area;
    bool side_changed;
};

int main() {
    LazySquare lazySquare(5);
    lazySquare.print();
    lazySquare.set_side(4);
    lazySquare.get_area();
    lazySquare.print();
    AdHocSquare adHocSquare(2);
    adHocSquare.print();
    adHocSquare.set_side(4);
    adHocSquare.get_area();
    adHocSquare.print();
    return 0;
}