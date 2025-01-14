 // Problem Description:
// This program generates a 3x3 matrix filled with random numbers ranging from 1 to 100.
// It uses functions to populate the matrix with random numbers and to display it in a structured format.

#include <iostream>
#include <string>
#include <iomanip>  // Formatting
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

using namespace std;

// Generates a random number within a specified range [From, To]
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from; // Because remainder can’t exceed the divisor
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

int main() {
    // Seeds the random number generator with the current time
    // Both time(0) and time(nullptr) do the same thing: return the current time.
    // Use nullptr in modern C++ for better readability and type safety.
    srand(static_cast<unsigned>(time(0)));

    int matrix[3][3];

    fillMatrixWithRandomNumbers(matrix, 3, 3);

    cout << "\nThe following is a 3x3 random matrix:\n";
    printMatrix(matrix, 3, 3);

    return 0;
}
