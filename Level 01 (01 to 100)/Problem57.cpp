/*
 * Reverse a Positive Number
 * This program reads a positive integer from the user and prints its reverse.
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

// Function to reverse a given number
int reverseNumber(int number) {
    int remainder = 0, reversedNumber = 0;
    while (number > 0) {
        remainder = number % 10;               // Extract the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        number /= 10;                          // Remove the last digit
    }
    return reversedNumber;
}

int main() {
    // Read a positive number and print its reverse
    cout << "\nReverse is: "
         << reverseNumber(readPositiveNumber("Please enter a positive number:"))
         << "\n";
    return 0;
}
