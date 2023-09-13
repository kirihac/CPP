#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
 int x;
 cout << "Enter x value: ";
 cin >> x;

 if (x>=0)
 {cout << exp(-x+2); }
 else {cout << exp(-x)*sin(1/(x+3.2));}
}