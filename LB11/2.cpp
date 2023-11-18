#include <iostream>

using namespace std;

struct Date{
    int hours;
    int minutes;
};


int main() {
    Date start_time;
    Date end_time;
    Date event_duration_time;
    int start_time_in_minutes,end_time_in_minutes, event_duration_time_in_minutes;
    start:
    cout << "Enter start time:";
    cin >> start_time.hours >> start_time.minutes;
    if (start_time.hours > 24){
        cout << "Entered hours more then 24\n";
        goto start;
    }
    if (start_time.minutes > 60){
        cout << "Entered minutes more then 60\n";
        goto start;
    }
    cout << "Enter end time:";
    cin >> end_time.hours >> end_time.minutes;
    if (end_time.hours > 24){
        cout << "Entered hours more then 24\n";
        goto start;
    }
    if (end_time.minutes > 60){
        cout << "Entered minutes more then 60\n";
        goto start;
    }

    start_time_in_minutes = start_time.hours*60+start_time.minutes;
    end_time_in_minutes = end_time.hours*60+end_time.minutes;
    event_duration_time_in_minutes = end_time_in_minutes-start_time_in_minutes;
    event_duration_time.hours = event_duration_time_in_minutes/60;
    while (event_duration_time.hours>24)
        event_duration_time.hours -= 24;
    event_duration_time.minutes = event_duration_time_in_minutes%60;
    cout << event_duration_time.hours<< ":"<< event_duration_time.minutes;
}
