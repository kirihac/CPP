#include <string>
#include <iostream>
using namespace std;

bool checkLength(string str)
{
    if(str.length()>=8) return true;
    return false;
}

bool checkUpperCase(string str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        if (isupper(str[i])) return true;
    }
    return false;
}

bool checkLowerCase(string str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        if (islower(str[i])) return true;
    }
    return false;
}

bool checkDigit(string str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        if (isdigit(str[i])) return true;
    }
    return false;
}

bool checkSpecialCharacter(string str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        if (!isalnum(str[i])) return true;
    }
    return false;
}

int main()
{
    cout << "Enter password\n";
    string password;
    bool valid = false;
    do {
        getline(cin, password);
        if (!checkLength(password)) cout<<"Password must be 8 characters long\n";
        if (!checkUpperCase(password)) cout<<"Password must have at least one upper-case letter\n";
        if (!checkLowerCase(password)) cout<<"Password must have at least one lower-case letter\n";
        if (!checkDigit(password)) cout<<"Password must have at least one digit\n";
        if (!checkSpecialCharacter(password)) cout<<"Password must have at least one Special Character\n";
        if (checkLength(password) && checkUpperCase(password) && checkLowerCase(password)
            && checkDigit(password) && checkSpecialCharacter(password)) valid = true;
        else cout << "Re-enter password\n";
    } while (!valid);
    cout << "The password is valid";
    return 0;
}