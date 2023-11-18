#include <iostream>

using namespace std;

struct Date{
    int hours;
    int minutes;
};


int main() {
    Date start_time;
    Date end_time;
    int time_in_minutes, total_time;
    start:
    cout << "Enter hours:";
    cin >> start_time.hours;
    if (start_time.hours > 24){
        cout << "Entered more then 24\n";
        goto start;
    }
    cout << "Enter minutes:";
    cin >> start_time.minutes;
    if (start_time.minutes > 60){
        cout << "Entered more then 60\n";
        goto start;
    }
    cout << "Enter time:";
    cin >> time_in_minutes;

    total_time = start_time.hours*60+start_time.minutes+time_in_minutes;
    end_time.hours = total_time/60;
    while (end_time.hours>24)
        end_time.hours -= 24;
    end_time.minutes = total_time%60;
    cout << end_time.hours<< ":"<< end_time.minutes;
}
