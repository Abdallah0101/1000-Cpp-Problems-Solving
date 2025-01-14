 // Problem Description:
// This program counts the occurrences of a specified number in a 3x3 matrix.

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

// Counts the occurrences of a given number in the matrix
short countNumberInMatrix(int matrix[3][3], int number, short rows, short cols) {
    short numberCount = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (matrix[i][j] == number) {
                numberCount++;
            }
        }
    }
    return numberCount;
}

int main() {
    int matrix[3][3] = { {9, 1, 12}, {0, 9, 1}, {0, 9, 9} };

    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    int number;
    cout << "\nEnter the number to count in matrix: ";
    cin >> number;

    cout << "\nNumber " << number << " count in matrix is "
         << countNumberInMatrix(matrix, number, 3, 3) << "\n";

    return 0;
}
