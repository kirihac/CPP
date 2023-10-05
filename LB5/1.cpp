#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    for (int i = 0; i < 5; i++){
        cout << "Enter x: ";
        cin >> x;
        y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << "y = " << y << endl;
    }
}