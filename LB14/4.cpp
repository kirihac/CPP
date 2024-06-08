#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

Date today(void) {
    time_t t = time(nullptr);
    tm tl = *localtime(&t);
    Date currentDate;
    currentDate.year = tl.tm_year + 1900;
    currentDate.month = tl.tm_mon + 1;
    currentDate.day = tl.tm_mday;
    return currentDate;
}

bool isLeap(int year) {
    if (year % 4 == 0) {
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

Date birthday(void){
    Date b;
    do {
        cout << "Enter birthday date(YYYY MM DD):" << endl;
        cin >> b.year >> b.month >> b.day;
    } while (b.month > 12 || b.month == 0 || b.day > monthLength(b.year, b.month) || b.day == 0);
    return b;
}

int all_day(Date t, Date b){
    int b_day = 0, t_day = 0, all_day = 0;
    for (int i = 1; i < b.month; i++) {
        b_day = b_day + monthLength(b.year, i);
    }
    b_day += b.day;

    for (int j = b.year; j < t.year; ++j) {
        for (int i = 1; i <= 12; i++) {
            t_day = t_day + monthLength(j, i);
        }
    }
    for (int i = 1; i < t.month; i++) {
        t_day = t_day + monthLength(t.year, i);
    }
    t_day += t.day;

    all_day = t_day - b_day;
    return all_day;
}

int main() {
    Date today_date = today();
    cout << "Today date: "<< today_date.year << "." << today_date.month << "." << today_date.day << endl;
    Date birthday_date = birthday();
    int all= all_day(today_date,birthday_date);
    cout << "The number of days that have passed from your birthday to the current date: " << all << endl;
    return 0;
}

