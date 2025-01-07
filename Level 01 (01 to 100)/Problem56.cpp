/*
 * Sum of Digits of a Positive Number
 * This program reads a positive integer from the user and calculates the sum of its digits.
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

// Function to calculate the sum of digits of a number
int calculateSumOfDigits(int number) {
    int sum = 0, remainder = 0;
    while (number > 0) {
        remainder = number % 10; // Extract the last digit
        number /= 10;            // Remove the last digit
        sum += remainder;        // Add the digit to the sum
    }
    return sum;
}

int main() {
    // Read a positive number and calculate the sum of its digits
    cout << "\nSum of Digits = "
         << calculateSumOfDigits(readPositiveNumber("Please enter a positive number:"))
         << "\n";
    return 0;
}
