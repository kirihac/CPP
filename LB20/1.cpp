#include <iostream>
using namespace std;

class GymMembership {
public:
    GymMembership(int id, string name, int months);
    GymMembership();
    void printStatus(int id);
    void set_name(string name);
    void set_months(int months);
    void extend(int number_of_months,int id);
    void cancel(int id);
    void create(int id, string name);
    void deleteMem();
    int getId() { return id; };
private:
    int id;
    string name;
    int months;
};
void GymMembership::printStatus(int id)
{
    if (this->id == id){
        cout << "Member " << this->id << " : " <<this->name << ", subscription valid for " << this->months<< " months" << endl;
    } else{
        cout << "Cannot perform this operation: Member "<< id <<" not found" << endl;
    }
}

GymMembership::GymMembership()
{
    id = 0; name = ""; months = 0;
}
GymMembership::GymMembership(int id, string name, int months)
{
    this->id = id;
    set_name(name);
    set_months(months);
}

void GymMembership::set_name(string name){
    this->name = name;
}

void GymMembership::set_months(int months){
    if (months<0){
        this->months = 0;
        cout << "Months must be not negative"<< endl;
    } else{
        this->months = months;
    }

}

void GymMembership::extend(int number_of_months,int id)
{
    if (number_of_months>0 && this->id == id){
        this->months += number_of_months;
    }
}

void GymMembership::cancel(int id)
{
    this->months = 0;
}

void GymMembership::create(int id, string name)
{
    this->id = id;
    set_name(name);
}
void GymMembership::deleteMem(){
    id = 0; name = ""; months = 0;
}

int main() {
    GymMembership member[100];
    int months = 0, id=0;
    string name = "";
    cout << "Provide member id:";
    cin >> id;
    cout << "Provide member name:";
    cin >> name;
    cout << "Provide number of subscription months:";
    cin >> months;
    member[id] = GymMembership(id, name, months);
    string command = "";
    member[id].printStatus(id);
    while (true)
    {
        cout << "What would you like to do?:";
        cin >> command;
        if (command == "quit"){
            break;
        }
        int num = 0;
        if (command == "extend"){
            cout << "Enter the id:";
            cin >> id;
            cout << "Enter the number of months:";
            cin >> num;
            member[id].extend(num,id);
            member[id].printStatus(id);
        }
        else if (command == "cancel"){
            cout << "Enter the id:";
            cin >> id;
            member[id].cancel(id);
            member[id].printStatus(id);
        } else if (command == "create"){
            cout << "Enter the id:";
            cin >> id;
            cout << "Provide member name:";
            cin >> name;
            member[id].create(id,name);
            member[id].printStatus(id);
        } else if (command == "select"){
            cout << "Enter the id:";
            cin >> id;
            member[id].printStatus(id);
        } else if (command == "delete"){
            cout << "Enter the id:";
            cin >> id;
            member[id].deleteMem();
        }
        else {
            cout << "Wrong command"<< endl;
        }
    }
    return 0;
}