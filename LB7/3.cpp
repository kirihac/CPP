#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter num"<< endl;;
    cin >> num;

    while (true) {
        if (num <= 20) {
            cout << '+';
            for (int i = 0; i < num - 2; i++)
                cout << '-';
            cout << '+' << endl;
            for (int i = 0; i < num - 2; i++) {
                cout << '|';
                for (int j = 0; j < num - 2; j++)
                    cout << ' ';
                cout << '|' << endl;
            }
            cout << '+';
            for (int i = 0; i < num - 2; i++)
                cout << '-';
            cout << '+' << endl;
            return 0;
        } else {
            cout << "Wrong num, please enter num < 20"<< endl;
            cin >> num;
        }

    }

}