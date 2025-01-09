/*
 * Custom Rounding of a Float Number
 * This program rounds a float number to the nearest integer using a custom rounding function (`myRound`)
 * and compares it with the built-in C++ `round` function.
 */

#include <iostream>
#include <cmath> // For round function
using namespace std;

// Function to get the fractional part of a float number
float getFractionPart(float number) {
    return number - int(number);
}

// Custom function to round a float number to the nearest integer
int myRound(float number) {
    int integerPart = int(number);
    float fractionPart = getFractionPart(number);

    if (abs(fractionPart) >= 0.5) {
        return (number > 0) ? (integerPart + 1) : (integerPart - 1);
    } else {
        return integerPart;
    }
}

// Function to read a float number from the user
float readFloatNumber() {
    float number;
    cout << "Please enter a float number: ";
    cin >> number;
    return number;
}

int main() {
    // Read the float number from the user
    float number = readFloatNumber();

    // Display the results
    cout << "Custom round result: " << myRound(number) << endl;
    cout << "C++ round result: " << round(number) << endl;

    return 0;
}
