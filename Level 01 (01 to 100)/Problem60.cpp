/*
 * Reverse and Print Digits of a Number
 * This program reads a positive number from the user, reverses its digits, and prints both the reversed number and its individual digits.
 */

#include <iostream>
#include <string>
using namespace std;

// Function to read a positive number from the user with a custom message
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0); // Ensure the number is positive
    return number;
}

// Function to reverse the digits of a number
int reverseNumber(int number) {
    int remainder = 0, reversedNumber = 0;
    while (number > 0) {
        remainder = number % 10; // Extract the last digit
        number = number / 10;    // Remove the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
    }
    return reversedNumber;
}

// Function to print each digit of a number
void printDigits(int number) {
    int remainder = 0;
    cout << "Digits of the number are:" << endl;
    while (number > 0) {
        remainder = number % 10; // Extract the last digit
        number = number / 10;    // Remove the last digit
        cout << remainder << endl; // Print the digit
    }
}

int main() {
    // Read a positive number from the user
    int number = readPositiveNumber("Please enter a positive number:");

    // Reverse and print the number
    cout << "\nReversed Number is: " << reverseNumber(number) << endl;

    // Print individual digits of the number
    printDigits(number);

    return 0;
}
