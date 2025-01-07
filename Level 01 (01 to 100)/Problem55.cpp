/*
 * Print Digits of a Positive Number
 * This program reads a positive integer from the user and prints each digit in reverse order.
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
    } while (number <= 0); // Keep asking until the user enters a positive number
    return number;
}

// Function to print the digits of a number in reverse order
void printDigits(int number) {
    int remainder = 0;
    while (number > 0) {
        remainder = number % 10; // Extract the last digit
        number /= 10;           // Remove the last digit from the number
        cout << remainder << endl; // Print the digit
    }
}

int main() {
    // Read a positive number and print its digits
    printDigits(readPositiveNumber("Please enter a positive number:"));
    return 0;
}
