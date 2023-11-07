#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m = 4;
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

    for (int i = 0; i < m; ++i) {
        int k = 0;
        for (int j = 0; j < n; ++j)
            if (numbers[i][j] % 2 == 0)
                k++;
        cout << "In line " << i << " count of even numbers = " << k << endl;
    }
}
