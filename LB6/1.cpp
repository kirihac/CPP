#include <iostream>

using namespace std;

int main()
{
    int N, i, amount = 0;
    cout << "Enter N: ";
    cin >> N;
    while (N > 0)
    {
        i = N % 10;
        N = (N - i) / 10;
        if (i != 1 && i != 9)
        {
            amount++;
        }
    }
    cout <<"Amount: " << amount;
}