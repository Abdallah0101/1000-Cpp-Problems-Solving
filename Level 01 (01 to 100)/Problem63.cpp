/*
 * Number Pattern
 * This program prints a number pattern starting from 1 up to the given number.
 * Each row contains the current number printed multiple times, increasing by one in each row.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to read a positive number from the user
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0); // Ensure only positive numbers are accepted
    return number;
}

// Function to print a number pattern
void printNumberPattern(int number) {
    cout << "\n"; // Print a blank line for formatting

    for (int row = 1; row <= number; row++) { // Loop through rows
        for (int col = 1; col <= row; col++) { // Print the current number `row` times
            cout << row << " ";
        }
        cout << "\n"; // Move to the next line after each row
    }
}

int main() {
    // Read a positive number and print the number pattern
    printNumberPattern(readPositiveNumber("Please enter a positive number:"));
    return 0;
}
