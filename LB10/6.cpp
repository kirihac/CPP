#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m = 4;
    int n = 7;
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

    int k = INT_MAX,minI = 0, minJ = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            if (numbers[i][j]<k){
                k=numbers[i][j];
                minI = i;
                minJ = j;
            }

    }
    cout << "Min number = " << k << ", its location = [" << minI << "][" << minJ << "]" <<  endl;
}