#include "iostream"
#include <iomanip>
using namespace std;

int main(void) {
    srand(time(NULL));
    int r = 3, c =3;
    int **mas = new int *[r];
    for (int i = 0; i < r; i++) {
        mas[i] = new int [c];
    }
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            mas[i][j] = rand() % 10-5;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << setw(3) << mas[i][j];
        cout << endl;
    }
    cout << "first diagonal: ";
    for (int i = 0; i < r; ++i) {
        cout << setw(3) << mas[i][i];
    }
    cout << "\nsecond diagonal: ";
    for (int i = 0; i < r; ++i) {
        cout << setw(3) << mas[i][c - 1 - i];
    }

    int even = 0, odd=0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            if (mas[i][j] % 2 == 0 && mas[i][j] != 0)
                even++;
            else if (mas[i][j] % 2 != 0 && mas[i][j] != 0)
                odd++;
    }
    cout << "\ncount of even numbers = " << even;
    cout << "\ncount of odd numbers = " << odd;

    for (int i = 0; i < r; i++) {
        delete [] mas [i];
    }
}