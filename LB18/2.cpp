#include <iostream>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    FlightBooking();
    void printStatus(int id);
    void set_capacity(int capacity);
    void set_reserved(int reserved);
    bool check_percentage();
    void reserveSeats(int number_ob_seats,int id);
    void cancelReservations(int number_ob_seats,int id);
    void create(int id, int capacity);
    void deleteFly();
    int getId() { return id; };
private:
    int id;
    int capacity;
    int reserved;
    int percentage=0;
};
void FlightBooking::printStatus(int id)
{
    if (this->id == id){
    this->percentage = (this->reserved * 100) / this->capacity;
    cout << "Flight " << this->id << " : " <<this->reserved << "/" << this->capacity<< "(" << this->percentage << "%) seats taken" << endl;
    } else{
        cout << "Cannot perform this operation: flight "<< id <<" not found" << endl;
    }
}

FlightBooking::FlightBooking()
{
    id = 0; capacity = 0; reserved = 0;
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


void FlightBooking::reserveSeats(int number_ob_seats,int id)
{
    if (number_ob_seats>0 && this->id == id){
        this->reserved += number_ob_seats;
        if (!check_percentage()){
            this->reserved -= number_ob_seats;
            cout << "Cannot perform this operation"<< endl;
        }
    }
}
void FlightBooking::cancelReservations(int number_ob_seats,int id)
{
    if (number_ob_seats>0 && number_ob_seats <= this->reserved && this->id == id){
        this->reserved -= number_ob_seats;
    } else{
        cout << "Cannot perform this operation"<< endl;
    }
}

void FlightBooking::create(int id, int capacity)
{
    this->id = id;
    set_capacity(capacity);
}
void FlightBooking::deleteFly(){
    id = 0; capacity = 0; reserved = 0;
}

int main() {
    FlightBooking booking[100];
    int reserved = 0,
            capacity = 0, id=0;
    cout << "Provide flight id:";
    cin >> id;
    cout << "Provide flight capacity:";
    cin >> capacity;
    cout << "Provide number of reserved seats:";
    cin >> reserved;
    booking[id] = FlightBooking(id, capacity, reserved);
    string command = "";
    booking[id].printStatus(id);
    while (true)
    {
        cout << "What would you like to do?:";
        cin >> command;
        if (command == "quit"){
            break;
        }
        int num = 0;
        if (command == "add"){
            cout << "Enter the id:";
            cin >> id;
            cout << "Enter the number:";
            cin >> num;
            booking[id].reserveSeats(num,id);
            booking[id].printStatus(id);
        }
        else if (command == "cancel"){
            cout << "Enter the id:";
            cin >> id;
            cout << "Enter the number:";
            cin >> num;
            booking[id].cancelReservations(num,id);
            booking[id].printStatus(id);
        } else if (command == "create"){
            cout << "Enter the id:";
            cin >> id;
            cout << "Provide flight capacity:";
            cin >> capacity;
            booking[id].create(id,capacity);
            booking[id].printStatus(id);
        } else if (command == "select"){
            cout << "Enter the id:";
            cin >> id;
            booking[id].printStatus(id);
        } else if (command == "delete"){
            cout << "Enter the id:";
            cin >> id;
            booking[id].deleteFly();
        }


        else {
            cout << "Wrong command"<< endl;
        }
    }
    return 0;
}