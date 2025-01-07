/*
 * Calculate Power of a Number
 * This program asks the user to enter a base number and an exponent,
 * then calculates and prints the result of base^exponent.
 */

#include <iostream>
using namespace std;

// Function to read a number from the user
int readNumber(const string& prompt) {
    int number;
    cout << prompt;
    cin >> number;
    return number;
}

// Function to calculate the power of a number
int calculatePower(int base, int exponent) {
    int result = 1; // Initialize result to 1
    for (int i = 1; i <= exponent; i++) {
        result *= base; // Multiply the result by the base
    }
    return result;
}

// Function to print the result
void printResult(int base, int exponent, int result) {
    cout << base << "^" << exponent << " = " << result << endl;
}

int main() {
    // Read base and exponent
    int base = readNumber("Please enter the base number: ");
    int exponent = readNumber("Please enter the exponent: ");

    // Calculate the power
    int result = calculatePower(base, exponent);

    // Print the result
    printResult(base, exponent, result);

    return 0;
}
