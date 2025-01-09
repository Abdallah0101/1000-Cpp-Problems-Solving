/*
 * Calculate Absolute Value of a Number
 * This program calculates the absolute value of a number using a custom function (`myAbsolute`)
 * and compares it with the built-in C++ `abs` function.
 */

#include <iostream>
#include <cmath> // For abs function
using namespace std;

// Function to calculate the absolute value of a number
float myAbsolute(float number) {
    return (number >= 0) ? number : -number;
}

// Function to read a number from the user
float readNumber() {
    float number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

int main() {
    // Read the number from the user
    float number = readNumber();

    // Display the results
    cout << "Custom absolute value: " << myAbsolute(number) << endl;
    cout << "C++ built-in abs function: " << abs(number) << endl;

    return 0;
}
