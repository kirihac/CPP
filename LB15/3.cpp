#include <iostream>
using namespace std;

int increment(int &a){
    a++;
    return a;
}

int increment(int &a, int b){
    a+=b;
    return a;
}

int main(void) {
    int var = 0;
    for(int i = 0; i < 10; i++)
        if(i % 2)
            increment(var);
        else
            increment(var,i);
    cout << var << endl;
    return 0;
}
