 // Problem Description:
// This program generates a 3x3 matrix with random numbers ranging from 1 to 10.
// It displays the matrix, the middle row, the middle column, and calculates the sum of all elements in the matrix.

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

// Prints the middle row of the matrix
void printMiddleRowOfMatrix(int matrix[3][3], short rows, short cols) {
    short middleRow = rows / 2;
    for (short j = 0; j < cols; j++) {
        cout << " " << setw(2) << matrix[middleRow][j] << " ";
    }
    cout << "\n";
}

// Prints the middle column of the matrix
void printMiddleColOfMatrix(int matrix[3][3], short rows, short cols) {
    short middleCol = cols / 2;
    for (short i = 0; i < rows; i++) {
        cout << " " << setw(2) << matrix[i][middleCol] << " ";
    }
    cout << "\n";
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

int main() {
    // Seeds the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    int matrix[3][3];

    fillMatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    cout << "\nMiddle Row of Matrix:\n";
    printMiddleRowOfMatrix(matrix, 3, 3);

    cout << "\nMiddle Column of Matrix:\n";
    printMiddleColOfMatrix(matrix, 3, 3);

    cout << "\nSum of all elements in the Matrix: " << calculateSumOfMatrix(matrix, 3, 3) << "\n";

    return 0;
}
