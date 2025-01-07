/*
 * Inverted Letter Pattern
 * Reads a positive number from the user and prints an inverted letter pattern.
 * The pattern starts with the corresponding uppercase letter of the number and decreases until 'A'.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to read a positive number from the user
int readPositiveInteger(const string& promptMessage) {
    int positiveNumber = 0;
    do {
        cout << promptMessage << endl;
        cin >> positiveNumber;
    } while (positiveNumber <= 0);
    return positiveNumber;
}

// Function to generate and print the inverted letter pattern
void generateAndPrintInvertedLetterPattern(int number) {
    cout << "\n";

    // Outer loop for each letter row
    for (int currentLetter = 65 + number - 1; currentLetter >= 65; currentLetter--) {
        for (int repetitionCount = 1; repetitionCount <= number - (65 + number - 1 - currentLetter); repetitionCount++) {
            cout << char(currentLetter); // Print corresponding letter
        }
        cout << "\n"; // Move to the next line after each row
    }
}

int main() {
    // Call the function to generate and print the inverted letter pattern
    generateAndPrintInvertedLetterPattern(readPositiveInteger("Please enter a positive number:"));

    return 0;
}
