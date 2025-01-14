 // Problem Description:
// This program creates a 3x3 matrix filled with ordered numbers starting from 1.
// It then displays the matrix in a structured format.

#include <iostream>
#include <string>

using namespace std;

// Fills a matrix with ordered numbers starting from 1
void fillMatrixWithOrderedNumbers(int matrix[3][3], short rows, short cols) {
    short counter = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            counter++;
            matrix[i][j] = counter;
        }
    }
}

// Prints the matrix in a structured format
void printMatrix(int matrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int matrix[3][3];

    fillMatrixWithOrderedNumbers(matrix, 3, 3);

    cout << "\nThe following is a 3x3 ordered matrix:\n";
    printMatrix(matrix, 3, 3);

    return 0;
}