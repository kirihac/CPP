#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    float epsilon = 0.000001;
    if (fabs(a - b) <= epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }
}