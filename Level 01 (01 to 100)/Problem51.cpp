/*
 * Multiplication Table (1 to 10)
 * This program prints a multiplication table from 1 to 10 with properly aligned rows and columns.
 * Includes a dynamic column separator for consistent formatting.
 */

#include <iostream>
using namespace std;

// Function to print the header of the multiplication table
void PrintTableHeader() {
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t"; // Print column headers
    }
    cout << "\n___________________________________________________________________________________\n";
}

// Function to adjust the column separator for consistent formatting
string ColumnSeparator(int i) {
    return (i < 10) ? " |" : "|"; // Adjust separator based on single or double digits
}

// Function to print the full multiplication table
void PrintMultiplicationTable() {
    PrintTableHeader(); // Print table header
    for (int i = 1; i <= 10; i++) {
        cout << " " << i << ColumnSeparator(i) << "\t"; // Row header with separator
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t"; // Print multiplication result
        }
        cout << endl; // Move to the next row
    }
}

int main() {
    PrintMultiplicationTable(); // Call the function to print the table
    return 0;
}
