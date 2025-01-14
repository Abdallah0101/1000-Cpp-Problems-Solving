 // Problem Description:
// This program checks if a given 3x3 matrix is a sparse matrix.
// A sparse matrix has more than half of its elements as zeros.

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> // Required for ceil function

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

// Counts the occurrences of a given number in the matrix
short countNumberInMatrix(int matrix[3][3], int number, short rows, short cols) {
    short numberCount = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (matrix[i][j] == number) {
                numberCount++;
            }
        }
    }
    return numberCount;
}

// Checks if a matrix is a sparse matrix
bool isSparseMatrix(int matrix[3][3], short rows, short cols) {
    short matrixSize = rows * cols;
    return countNumberInMatrix(matrix, 0, rows, cols) >= ceil(static_cast<float>(matrixSize) / 2);
}

int main() {
    int matrix[3][3] = { {0, 0, 12}, {9, 9, 1}, {0, 0, 9} };

    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    if (isSparseMatrix(matrix, 3, 3)) {
        cout << "\nYes: It is a Sparse Matrix\n";
    } else {
        cout << "\nNo: It is NOT a Sparse Matrix\n";
    }

    return 0;
}
