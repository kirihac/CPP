#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Fraction{
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
private:
    int numerator;
    int denominator;
};

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

string Fraction::toString(){
    int whole = numerator / denominator;
    int remainder = numerator % denominator;
    stringstream toStr;
    if (whole != 0) {
        toStr << whole;
    }

    if (whole != 0 && remainder != 0) {
        toStr << " ";
    }
    if (remainder != 0 ) {
        if ((double)numerator/(double)denominator < 0 && whole == 0) {
            toStr << "-";
        }
        toStr << abs(remainder) << "/" << abs(denominator);
    }
    return toStr.str();
}

double Fraction::toDouble(){
    return (double)numerator/(double)denominator;
}


int main(void) {
    int num, den;
    char ch;
    string input = "";
    getline(cin,input);
    istringstream iss(input);
    iss >> num >> ch >> den;
    if(den != 0){
    Fraction fraction(num, den);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;}
    else{cout << "denominator can't be 0";}
    return 0;
}