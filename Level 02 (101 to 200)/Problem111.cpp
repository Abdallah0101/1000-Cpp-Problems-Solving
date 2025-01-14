 // Problem Description:
// This program generates two 3x3 matrices with random numbers ranging from 1 to 10.
// It compares the matrices by their element-wise sum and determines if they are equal.

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

using namespace std;

// Generates a random number within a specified range [from, to]
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Fills a matrix with random numbers
void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            matrix[i][j] = generateRandomNumber(1, 10);
        }
    }
}

// Prints the matrix in a structured format
void printMatrix(int matrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << " " << setw(2) << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

// Calculates the sum of all elements in the matrix
int calculateSumOfMatrix(int matrix[3][3], short rows, short cols) {
    int sum = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

// Checks if two matrices are equal by comparing their total sums
bool areEqualMatrices(int matrix1[3][3], int matrix2[3][3], short rows, short cols) {
    return calculateSumOfMatrix(matrix1, rows, cols) == calculateSumOfMatrix(matrix2, rows, cols);
}

int main() {
    // Seeds the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    int matrix1[3][3], matrix2[3][3];

    fillMatrixWithRandomNumbers(matrix1, 3, 3);
    cout << "\nMatrix 1:\n";
    printMatrix(matrix1, 3, 3);

    fillMatrixWithRandomNumbers(matrix2, 3, 3);
    cout << "\nMatrix 2:\n";
    printMatrix(matrix2, 3, 3);

    if (areEqualMatrices(matrix1, matrix2, 3, 3)) {
        cout << "\nYES: Both matrices are equal.\n";
    } else {
        cout << "\nNO: Matrices are NOT equal.\n";
    }

    return 0;
}
