#include "iostream"

using namespace std;
int main(void) {
    srand(time(NULL));
    int size = 10;
    int *mas = new int[size];
    int positive = 0, negative = 0;
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 5 - 2;
        cout << mas[i] << " ";
        if (mas[i] > 0) {
            positive++;
        } else if (mas[i] < 0) {
            negative++;
        }
    }
    cout << "\n " << "number of positive: " << positive;
    cout << "\n " << "number of negative: " << negative;
    delete[]mas;
}
