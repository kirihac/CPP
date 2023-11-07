#include <iostream>

using namespace std;

int main() {
    int arraySize = 12;
    int m[arraySize];
    srand(time(NULL));
    for (int i = 0; i < arraySize; ++i) {
        m[i] = rand() % 10 - 3;
        cout << m[i] << " ";
    }

    for (int i = 0; i < arraySize; i++) {
        for (int c = 0; c < arraySize; c++) {
            if (m[i] < m[c]) {
                int temp = m[i];
                m[i] = m[c];
                m[c] = temp;
            }
        }
    }
    cout << endl << "Increase:";

    for (int i = 0; i < arraySize; ++i) {
        cout << m[i] << ' ';
    }

    for (int i = 0; i < arraySize; i++) {
        for (int c = 0; c < arraySize; c++) {
            if (m[i] > m[c]) {
                int temp = m[i];
                m[i] = m[c];
                m[c] = temp;
            }
        }
    }

    cout << endl << "Decrease:";

    for (int i = 0; i < arraySize; ++i) {
        cout << m[i] << ' ';
    }

    int m2[arraySize];
    cout << endl;
    srand(time(NULL));
    for (int i = 0; i < arraySize; ++i) {
        m2[i] = rand() % 10 - 3;
        cout << m2[i] << " ";
    }

    int max_num = 0;
    int max_index = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (max_num < m2[i]){
            max_num = m2[i];
            max_index = i;}
    }

    for (int i = 0; i < max_index; ++i) {
        if (m2[i] < 0) {
            m2[i] = 0;
        }
    }

    cout << endl;

    for (int i = 0; i < arraySize; ++i) {
        cout << m2[i] << ' ';
    }
}
