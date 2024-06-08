#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class IPAddress {
protected:
    string ip;
public:
    IPAddress(string ip)
    {
        this->ip = ip;
    }
    virtual void print()
    {
        cout << this->ip<<endl;
    }
};

class IPAddressChecked : public IPAddress {
private:
    bool ipCorrect;
public:
    IPAddressChecked(string ip) : IPAddress(ip)
    { }
    void print() override
    {
        int first, second, third, four;
        char ch;
        istringstream iss(ip);
        iss >> first >> ch >> second >> ch >> third >> ch >> four;
        IPAddress::print();
        if (first<=255 && first>=0 && second<=255 && second>=0 && third<=255 && third>=0 && four<=255 && four>=0 ){
            cout << " - Correct"<< endl;
        } else
            cout << " - Not Correct"<< endl;
    }

};



int main()
{
    string firstIP, secondIP, thirdIP;
    cin >> firstIP;
    IPAddress* first = new IPAddress(firstIP);
    first->print();
    cin >> secondIP;
    IPAddressChecked* second = new IPAddressChecked(secondIP);
    second->print();
    cin >>thirdIP;
    IPAddressChecked* third = new IPAddressChecked(thirdIP);
    third->print();
    return 0;
}