// 16 variant
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
int a,b;
cout<< "Enter namber of month: " ;
c: cin>>a;
switch(a){
case 1: b = 31; break;
case 2: b = 28; break;
case 3: b = 31; break;
case 4: b = 30; break;
case 5: b = 31; break;
case 6: b = 30; break;
case 7: b = 31; break;
case 8: b = 31; break;
case 9: b = 30; break;
case 10: b = 31; break;
case 11: b = 30; break;
case 12: b = 31; break;
default: {
cout<< "Wrong, please enter namber from 1 to 12: ";
goto c;}

}
cout <<a<<"th month has "<< b << " days";
}