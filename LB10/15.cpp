#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m = 3;
    int n = 3;
    int numbers[m][n];
    srand(time(NULL));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            numbers[i][j] = rand() % 5;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(3) << numbers[i][j];
        cout << endl;
    }
    int firstDiagonalSum = 0, secondDiagonalSum = 0;
    for (int i = 0; i < m; ++i) {
        firstDiagonalSum += numbers[i][i];
    }
    for (int i = 0; i < m; ++i) {
        secondDiagonalSum += numbers[i][n - 1 - i];
    }
    cout << "Sum of first diagonal " << firstDiagonalSum << endl << "Sum of second diagonal = " << secondDiagonalSum << endl;
}