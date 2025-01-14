 // Problem Description:
// This program finds and prints the minimum and maximum numbers in a 3x3 matrix.

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

// Finds the minimum number in the matrix
int findMinNumberInMatrix(int matrix[3][3], short rows, short cols) {
    int min = matrix[0][0];
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

// Finds the maximum number in the matrix
int findMaxNumberInMatrix(int matrix[3][3], short rows, short cols) {
    int max = matrix[0][0];
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main() {
    int matrix[3][3] = { {77, 5, 12}, {22, 20, 6}, {14, 3, 9} };

    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    cout << "\nMinimum Number is: " << findMinNumberInMatrix(matrix, 3, 3);
    cout << "\n\nMaximum Number is: " << findMaxNumberInMatrix(matrix, 3, 3);

    return 0;
}
