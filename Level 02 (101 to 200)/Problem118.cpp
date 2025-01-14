 // Problem Description:
// This program finds and prints intersected numbers between two 3x3 matrices.
// It checks for numbers in one matrix that are also present in the other.

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

// Checks if a given number exists in the matrix
bool isNumberInMatrix(int matrix[3][3], int number, short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (matrix[i][j] == number) {
                return true;
            }
        }
    }
    return false;
}

// Prints intersected numbers between two matrices
void printIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            int number = matrix1[i][j];
            if (isNumberInMatrix(matrix2, number, rows, cols)) {
                cout << " " << setw(3) << number << " ";
            }
        }
    }
    cout << "\n";
}

int main() {
    int matrix1[3][3] = { {77, 5, 12}, {22, 20, 1}, {1, 0, 9} };
    int matrix2[3][3] = { {5, 80, 90}, {22, 77, 1}, {10, 8, 33} };

    cout << "\nMatrix 1:\n";
    printMatrix(matrix1, 3, 3);

    cout << "\nMatrix 2:\n";
    printMatrix(matrix2, 3, 3);

    cout << "\nIntersected Numbers are:\n";
    printIntersectedNumbers(matrix1, matrix2, 3, 3);

    return 0;
}
