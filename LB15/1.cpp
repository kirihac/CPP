#include <iostream>
using namespace std;

bool isPrime(int number) {
    int if_prime = 0;
    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            if_prime++;
        }
    }
    if (if_prime > 0 || number <= 1) {
        return false;
    } else{
        return true;
    }
}

int main() {
    int b;
    cin >> b;
    cout << isPrime(b);
}
