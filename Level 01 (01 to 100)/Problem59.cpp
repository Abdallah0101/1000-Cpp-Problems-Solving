/*
 * Digit Frequency Analysis
 * This program reads a positive integer from the user and prints the frequency of each digit (0–9) in the number.
 */

#include <iostream>
#include <string>
using namespace std;

// Function to read a positive integer from the user with a custom message
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Function to count the frequency of a specific digit in a number
int countDigitFrequency(short digitToCheck, int number) {
    int freqCount = 0, remainder = 0;
    while (number > 0) {
        remainder = number % 10; // Extract the last digit
        number = number / 10;    // Remove the last digit
        if (digitToCheck == remainder) {
            freqCount++; // Increment the count if the digit matches
        }
    }
    return freqCount; // Return the frequency count
}

// Function to print the frequency of all digits in the number
void printAllDigitsFrequency(int number) {
    cout << endl;
    for (int digit = 0; digit < 10; digit++) {
        int digitFrequency = countDigitFrequency(digit, number);
        if (digitFrequency > 0) {
            cout << "Digit " << digit << " Frequency is "
                 << digitFrequency << " Time(s).\n";
        }
    }
}

int main() {
    // Read a number from the user
    int number = readPositiveNumber("Please enter a positive number:");
    // Print the frequency of all digits in the entered number
    printAllDigitsFrequency(number);
    return 0;
}
