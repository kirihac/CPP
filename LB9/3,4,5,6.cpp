#include <iostream>

using namespace std;

int main() {
    int arraySize = 12;
    int numbers[arraySize];
    srand(time(NULL));
    for (int i = 0; i < arraySize; i++) {
        numbers[i] = rand() % 10;
        cout << numbers[i] << " ";
    }
//3
    int max_num = INT_MIN;
    int max_index = 0;
    int min_num = INT_MAX;
    int min_index = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (max_num < numbers[i]) {
            max_num = numbers[i];
            max_index = i;
        }
        if (min_num > numbers[i]) {
            min_num = numbers[i];
            min_index = i;
        }
    }

    cout << endl << "max num: " << max_num << endl << "min num: " << min_num << endl;
    numbers[max_index] = min_num;
    numbers[min_index] = max_num;

    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << ' ';
    }
//4
    int A, num_more_than_A = 0;
    cout << endl << "Enter A: ";
    cin >> A;
    for (int i = 0; i < arraySize; ++i) {
        if (A < numbers[i]) {
            cout << numbers[i] << ' ';
            num_more_than_A++;
        }
    }
    cout << endl << "number elements larger than A: " << num_more_than_A;
//5
    int second_max_num = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] != max_num) {
            if (second_max_num < numbers[i]) {
                second_max_num = numbers[i];
            }
        }
    }
    cout << endl << "Second max num: " << second_max_num << endl;
//6
    int first0 = -1;
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] == 0) {
            first0 = i;
            break;
        }
    }
    if (first0 == -1) {
        cout << "There is no 0 elements";
    } else {
        cout << "Index of first 0 element: " << first0;
    }
}