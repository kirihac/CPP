#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 25; i++)
    {
        sum = sum + pow(i, 2);
    }
    cout << "The sum of squares of numbers from 1 to 25: " << sum;
}