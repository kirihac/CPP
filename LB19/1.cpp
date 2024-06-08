#include <iostream>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    void set_capacity(int capacity);
    void set_reserved(int reserved);
    bool check_percentage();
    void reserveSeats(int number_ob_seats);
    void cancelReservations(int number_ob_seats);
private:
    int id;
    int capacity;
    int reserved;
    int percentage=0;
};
void FlightBooking::printStatus()
{
    this->percentage = (this->reserved * 100) / this->capacity;
    cout << "Flight " << this->id << " : " <<this->reserved << "/" << this->capacity<< "(" << this->percentage << "%) seats taken" << endl;
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    set_capacity(capacity);
    set_reserved(reserved);
    if (!check_percentage()){
        this->reserved = 0;
    };
}
void FlightBooking::set_capacity(int capacity){
    if (capacity<1){
        this->capacity = 5;
        cout << "Capacity must be not negative"<< endl;
    } else{
        this->capacity = capacity;
    }
}

void FlightBooking::set_reserved(int reserved){
    if (reserved<0){
        this->reserved = 0;
        cout << "Reserved must be not negative"<< endl;
    } else{
        this->reserved = reserved;
    }

}
bool FlightBooking::check_percentage(){
    this->percentage = (this->reserved * 100) / this->capacity;
    if (this->percentage > 105){
        this->percentage = 0;
        cout << "Not allow more than 105% reservation of the total capacity."<< endl;
        return false;
    }
    return true;
}


void FlightBooking::reserveSeats(int number_ob_seats)
{
    if (number_ob_seats>0){
        this->reserved += number_ob_seats;
        if (!check_percentage()){
            this->reserved -= number_ob_seats;
            cout << "Cannot perform this operation"<< endl;
        }
    }
}
void FlightBooking::cancelReservations(int number_ob_seats)
{
    if (number_ob_seats>0 && number_ob_seats <= this->reserved  ){
        this->reserved -= number_ob_seats;
    } else{
        cout << "Cannot perform this operation"<< endl;
    }
}
int main() {
    int reserved = 0,
            capacity = 0;
    cout << "Provide flight capacity:";
    cin >> capacity;
    cout << "Provide number of reserved seats:";
    cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    string command = "";
    booking.printStatus();
    while (true)
    {
        cout << "What would you like to do?:";
        cin >> command;
        if (command == "quit"){
            break;
        }
        int num = 0;
        if (command == "add"){
            cout << "Enter the number:";
            cin >> num;
            booking.reserveSeats(num);
            booking.printStatus();
        }
        else if (command == "cancel"){
            cout << "Enter the number:";
            cin >> num;
            booking.cancelReservations(num);
            booking.printStatus();
        } else {
            cout << "Wrong command"<< endl;
        }
    }
    return 0;
}