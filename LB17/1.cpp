#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string country;
};
void print(Person* person)
{
    cout << person->name << " is " << person->age << " years old, he lives in " << person->country << endl;
}

int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.country = "Ukraine";
    cout << "Meet ";
    print(&person);
    Person person2;
    person2.name = "Tima";
    person2.age = 14;
    person2.country = "Poland";
    cout << "Meet ";
    print(&person2);
    return 0;
}