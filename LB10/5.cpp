#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m = 3;
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

    int k = 0,maxI = 0, maxJ = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            if (numbers[i][j]>k){
                k=numbers[i][j];
                maxI = i;
                maxJ = j;
            }

    }
    cout << "Max number = " << k << ", its location = [" << maxI << "][" << maxJ << "]" <<  endl;
}
