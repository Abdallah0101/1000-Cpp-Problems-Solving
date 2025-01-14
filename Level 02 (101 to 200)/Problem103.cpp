 // Problem Description:
// This program generates a 3x3 matrix filled with random numbers ranging from 1 to 100.
// It calculates the sum of each row and stores the results in an array, then displays the matrix and the row sums.

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

// Calculates the sum of a specific row in the matrix
int calculateRowSum(int matrix[3][3], short rowNumber, short cols) {
    int sum = 0;
    for (short j = 0; j < cols; j++) {
        sum += matrix[rowNumber][j];
    }
    return sum;
}

// Calculates the sum of each row in the matrix and stores the results in an array
void calculateMatrixRowSums(int matrix[3][3], int rowSums[3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        rowSums[i] = calculateRowSum(matrix, i, cols);
    }
}

// Prints the row sums stored in an array
void printRowSumsArray(int rowSums[3], short rows) {
    cout << "\nThe following are the sums of each row in the matrix:\n";
    for (short i = 0; i < rows; i++) {
        cout << " Row " << i + 1 << " Sum = " << rowSums[i] << endl;
    }
}

int main() {
    // Seeds the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    int matrix[3][3];
    int rowSums[3];

    fillMatrixWithRandomNumbers(matrix, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    printMatrix(matrix, 3, 3);

    calculateMatrixRowSums(matrix, rowSums, 3, 3);
    printRowSumsArray(rowSums, 3);

    return 0;
}
