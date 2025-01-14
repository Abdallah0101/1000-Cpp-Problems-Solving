 // Problem Description:
// This program checks if a given matrix is a scalar matrix.
// A scalar matrix has equal diagonal elements, with all non-diagonal elements as 0.

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

// Checks if a matrix is a scalar matrix
bool isScalarMatrix(int matrix[3][3], short rows, short cols) {
    int firstDiagonalElement = matrix[0][0];
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (i == j && matrix[i][j] != firstDiagonalElement) {
                return false;
            } else if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][3] = { {9, 0, 0}, {0, 9, 0}, {0, 0, 9} };

    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    if (isScalarMatrix(matrix, 3, 3)) {
        cout << "\nYES: Matrix is a scalar matrix.\n";
    } else {
        cout << "\nNO: Matrix is NOT a scalar matrix.\n";
    }

    return 0;
}
