#include "iostream"
using namespace std;
int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    int *ptr, max_value, min_value;
    ptr=vector;
    max_value = *ptr;
    min_value = *ptr;
    for (int i = 1; i < n; ++i) {
        if (*(ptr + i) > max_value) {
            max_value = *(ptr + i);
        }
    }
    for (int i = 1; i < n; ++i) {
        if (*(ptr + i) < min_value) {
            min_value = *(ptr + i);
        }
    }
    cout << "Max value: " << max_value << endl << "Min value: " << min_value;
    return 0;
}

