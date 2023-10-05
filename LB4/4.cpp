#include <iostream>

using namespace std;

int main(void) {
   int a,b,c,d;
   cout << "Enter 4 numbers";
   cin >> a >> b >> c >> d;
    if (a>0 && a<256 && b>0 && b<256 && c>0 && c<256 && d>0 && d<256)
        cout << a << "." << b << "." << c << "." << d;
    else
        cout << "Numbers must be in the range from 1 to 255";
}