 // Problem Description:
// This program generates a 3x3 matrix filled with random numbers ranging from 1 to 100.
// It calculates the sum of each column in the matrix, stores these sums in an array, and displays the matrix along with the column sums.

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
            matrix[i][j] = generateRandomNumber(1, 100);
        }
    }
}

// Prints the matrix in a structured format
void printMatrix(int matrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

// Calculates the sum of a specific column in the matrix
int calculateColumnSum(int matrix[3][3], short rows, short colNumber) {
    int sum = 0;
    for (short i = 0; i < rows; i++) {
        sum += matrix[i][colNumber];
    }
    return sum;
}

// Calculates the sum of each column in the matrix and stores the results in an array
void calculateMatrixColumnSums(int matrix[3][3], int columnSums[3], short rows, short cols) {
    for (short i = 0; i < cols; i++) {
        columnSums[i] = calculateColumnSum(matrix, rows, i);
    }
}

// Prints the column sums stored in an array
void printColumnSumsArray(int columnSums[3], short length) {
    cout << "\nThe following are the sums of each column in the matrix:\n";
    for (short i = 0; i < length; i++) {
        cout << " Column " << i + 1 << " Sum = " << columnSums[i] << endl;
    }
}

int main() {
    // Seeds the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    int matrix[3][3];
    int columnSums[3];

    fillMatrixWithRandomNumbers(matrix, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    printMatrix(matrix, 3, 3);

    calculateMatrixColumnSums(matrix, columnSums, 3, 3);
    printColumnSumsArray(columnSums, 3);

    return 0;
}
