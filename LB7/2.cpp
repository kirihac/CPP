#include <iostream>

using namespace std;

int main() {
    double pi4 = 0.;
    long n;
    int a = 1;
    cout << "Number of iterations? ";
    cin >> n;

    for (double i = 1; i < n; i = i + 2) {
        if (a % 2 != 0) {
            pi4 = pi4 + (1 / i);
        } else if (a % 2 == 0) {
            pi4 = pi4 - (1 / i);
        }
        a++;

    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}
