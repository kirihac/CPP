#include <iostream>
using namespace std;
bool isLeap(int year) {
    if (year % 4 == 0){
        return true;
    } else
        return false;
}
int monthLength(int year, int month) {
    int vector[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30,31 };
    int days;
    if (isLeap(year)==1 && month == 2){
        days = 29;
    } else{
        days = vector[month-1];
    }
    return days;
}

int main(void) {
    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr,mo) << " ";
        cout << endl;
    }
    return 0;
}
