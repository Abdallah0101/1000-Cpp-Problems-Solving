 // Problem Description:
// This program checks if a given matrix is an identity matrix.
// An identity matrix has 1s on its main diagonal and 0s elsewhere.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Prints the matrix in a structured format
void printMatrix(int matrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << " " << setw(3) << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

// Checks if a matrix is an identity matrix
bool isIdentityMatrix(int matrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (i == j && matrix[i][j] != 1) {
                return false;
            } else if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };

    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    if (isIdentityMatrix(matrix, 3, 3)) {
        cout << "\nYES: Matrix is an identity matrix.\n";
    } else {
        cout << "\nNO: Matrix is NOT an identity matrix.\n";
    }

    return 0;
}
