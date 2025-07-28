#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 4, 0},
        {2, 5, 1},
        {3, 6, 3}
    };

    int rowSum, colSum;

    cout << "Sum of each row:\n";
    for (int i = 0; i < 3; i++) {
        rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << " = " << rowSum << endl;
    }

    cout << "\nSum of each column:\n";
    for (int j = 0; j < 3; j++) {
        colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}