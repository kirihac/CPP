#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    int if_prime = 0;
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            if_prime++;
        }
    }
    if (if_prime > 0 || num <= 1) {
        return false;
    } else{
        return true;
    }
}
int main(void) {
    for(int i = 0; i <= 21; i++)
        if(isPrime(i))
            cout << i << " ";
    cout << endl;
    return 0;
}
