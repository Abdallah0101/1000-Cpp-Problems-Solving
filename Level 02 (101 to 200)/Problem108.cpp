 // Problem Description:
// This program generates two 3x3 matrices with random numbers ranging from 1 to 10.
// It multiplies the corresponding elements of the two matrices and displays the result in a new matrix.

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

// Multiplies corresponding elements of two matrices and stores the result in a new matrix
void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int resultMatrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            resultMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
}

int main() {
    // Seeds the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    int matrix1[3][3], matrix2[3][3], resultMatrix[3][3];

    fillMatrixWithRandomNumbers(matrix1, 3, 3);
    cout << "\nMatrix 1:\n";
    printMatrix(matrix1, 3, 3);

    fillMatrixWithRandomNumbers(matrix2, 3, 3);
    cout << "\nMatrix 2:\n";
    printMatrix(matrix2, 3, 3);

    multiplyMatrices(matrix1, matrix2, resultMatrix, 3, 3);

    cout << "\nResult Matrix (Element-wise Multiplication):\n";
    printMatrix(resultMatrix, 3, 3);

    return 0;
}
