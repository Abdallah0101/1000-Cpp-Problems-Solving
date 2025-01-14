 // Problem Description:
// This program checks if a given 3x3 matrix is a palindrome matrix.
// A palindrome matrix has rows where the elements are symmetrical.

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

// Checks if the matrix is a palindrome matrix
bool isPalindromeMatrix(int matrix[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols / 2; j++) {
            if (matrix[i][j] != matrix[i][cols - 1 - j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][3] = { {1, 2, 1}, {5, 5, 5}, {7, 3, 7} };

    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    if (isPalindromeMatrix(matrix, 3, 3)) {
        cout << "\nYes: Matrix is a Palindrome Matrix\n";
    } else {
        cout << "\nNo: Matrix is NOT a Palindrome Matrix\n";
    }

    return 0;
}