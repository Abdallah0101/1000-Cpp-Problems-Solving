 // Problem Description:
// This program checks for the presence of a specific number in a 3x3 matrix.
// It provides two methods to determine if the number exists: a slower count method and a faster boolean check.

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

int main() {
    int matrix[3][3] = { {77, 5, 12}, {22, 20, 1}, {1, 0, 9} };

    cout << "\nMatrix:\n";
    printMatrix(matrix, 3, 3);

    int number;
    cout << "\nPlease Enter the number to look for in the matrix: ";
    cin >> number;

    // Using Count method (slower)
    if (countNumberInMatrix(matrix, number, 3, 3) > 0) {
        cout << "\nYes: The number is present in the matrix (Count Method).\n";
    } else {
        cout << "\nNo: The number is NOT present in the matrix (Count Method).\n";
    }

    // Using boolean method (faster)
    if (isNumberInMatrix(matrix, number, 3, 3)) {
        cout << "\nYes: The number is present in the matrix (Boolean Check).\n";
    } else {
        cout << "\nNo: The number is NOT present in the matrix (Boolean Check).\n";
    }

    return 0;
}
