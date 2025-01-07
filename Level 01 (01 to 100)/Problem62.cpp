/*
 * Inverted Number Pattern
 * This program prints an inverted number pattern based on the input number.
 * The pattern starts from the given number and decreases until 1.
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
    } while (number <= 0);
    return number;
}

// Function to print an inverted number pattern
void printInvertedNumberPattern(int number) {
    cout << "\n";
    for (int row = number; row >= 1; row--) { // Start from the input number and decrement
        for (int col = 1; col <= row; col++) { // Print numbers up to the current row value
            cout << row << " ";
        }
        cout << "\n"; // Move to the next line after each row
    }
}

int main() {
    int number = readPositiveNumber("Please enter a positive number:");
    printInvertedNumberPattern(number);
    return 0;
}
