/*
 * Letter Pattern
 * Reads a positive number from the user and prints a letter pattern.
 * The pattern starts from 'A' and grows to the corresponding uppercase letter of the number.
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

// Function to generate and print the letter pattern
void printLetterPattern(int number) {
    cout << "\n";

    // Outer loop to handle rows
    for (int i = 65; i <= 65 + number - 1; i++) {
        // Inner loop to print letters in the row
        for (int j = 1; j <= i - 65 + 1; j++) {
            cout << char(i); // Print the character
        }
        cout << "\n"; // Move to the next row
    }
}

int main() {
    // Call the function to generate and print the letter pattern
    printLetterPattern(readPositiveNumber("Please enter a positive number:"));

    return 0;
}
