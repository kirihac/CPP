#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
 int x;
 int y;
 cout << "Does the point fall within the shaded area?\n";
 cout << "Enter x value: ";
 cin >> x;
 cout << "Enter y value: ";
 cin >> y;
 if (x>=0 && x<=3 && y>=0 && y<=1)
 {cout << "yes"; }
 else {cout << "no";}
}