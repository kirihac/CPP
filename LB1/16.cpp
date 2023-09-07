#include <iostream>
#include <string>
#include <math.h>

int main()
{
    
 int a = 3;
 double b = 0.501;
 double y;
 y = (pow((pow((a-b),2))* pow(sin(1-a/b),2)*(M_PI/3)*pow(cos(1-b/a),2)*(M_PI/3),1.0/3))/
 (0.701*log(pow((a-b),2)));
 std::cout << y;
 
}