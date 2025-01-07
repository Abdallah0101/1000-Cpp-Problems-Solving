/*
 * Count Digit Frequency in a Number
 * This program reads a positive number and a digit to check.
 * It calculates how many times the digit appears in the number.
 */

#include <iostream>
#include <string>
using namespace std;

// Function to read a positive number with a custom message
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0); // Ensure the number is positive
    return number;
}

// Function to count the frequency of a specific digit in a number
int countDigitFrequency(short digitToCheck, int number) {
    int frequencyCount = 0, remainder = 0;
    while (number > 0) {
        remainder = number % 10; // Extract the last digit
        number /= 10;            // Remove the last digit
        if (digitToCheck == remainder) {
            frequencyCount++;    // Increment count if digit matches
        }
    }
    return frequencyCount;
}

int main() {
    // Read the main number
    int mainNumber = readPositiveNumber("Please enter the main number:");
    
    // Read the digit to check
    short digitToCheck = readPositiveNumber("Please enter one digit to check:");
    
    // Print the frequency of the digit in the number
    cout << "\nDigit " << digitToCheck << " frequency is "
         << countDigitFrequency(digitToCheck, mainNumber) << " time(s).\n";
    
    return 0;
}
