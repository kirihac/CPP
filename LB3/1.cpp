#include <iostream>
#include <string>
#include <math.h>
//15 variant
using namespace std;

int main() {
int i, x1, x2, x3, r;
Enter:
cout << "Enter value: ";
cin >> i;

if (i / 100>0 && i /100<10){
x1 = i / 100;
x2 = i / 10 % 10;
x3 = i % 10;
r = x3*100+x2*10+x1; //міняємо місцями першу і останню цифру числа
}else{
cout <<"Wrong, ";
goto Enter;
}
cout << x1<<"\n" << x2<<"\n"<<x3<<"\n";
cout << r; 
}