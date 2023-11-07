#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m = 6;
    int n = 4;
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

    for (int j = 0; j < n; ++j) {
        int k = 0;
        for (int i = 0; i < m; ++i)
            if (numbers[i][j] % 2 == 0)
                k++;
        cout << "In column " << j << " count of even numbers = " << k << endl;
    }
}