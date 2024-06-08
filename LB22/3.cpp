#include <iostream>
using namespace std;
const int DivideByZero = 111;
using namespace std;
float internaldiv(float arg1, float arg2)
{
    float arg = 0;
    try {
        if (0==arg2)
            throw "Your input is not valid, you can't divide by zero.";
        arg = arg1 / arg2;
    }
    catch (const char* exception){
        cerr << "Error: " << exception << endl;
    }
    return arg;
}

float div(float &res, float arg1, float arg2) {
    try {
        if(arg2 == 0.0)
            throw "Are you kidding me?";
        res = internaldiv(arg1, arg2);
    }
    catch (const char* exception){
        cerr << "Error: " << exception << endl;
    }
    return res;
}

int main(void) {
    float r, a, b;
        cin >> a;
        cin >> b;
    try {
        if (b == 0)
            throw "Your input is not valid, you can't divide by zero.";
        div(r,a,b);
        cout << r << endl;
    }catch (const char* exception){
        cerr << "Error: " << exception << endl;}
    return 0;
}