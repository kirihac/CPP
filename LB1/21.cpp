#include <iostream>
#include <string>
#include <math.h>

int main()
{
    
 int a = 2;
 double b = 13.17;
 double y;
 y = sqrt((exp(0.5*log((1-cos((a/b)*M_PI))/(1+cos((a/b)*M_PI)))))+(exp(0.3*log((1-sin((b/a)*M_PI))/(1+sin((b/a)*M_PI))))));
 std::cout << y;
 
}