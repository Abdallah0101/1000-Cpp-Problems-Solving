/*
 * Custom Ceil Function
 * This program implements a custom ceil function (`myCeil`) to find the smallest integer
 * greater than or equal to a given number. The result is compared with the built-in C++ `ceil` function.
 */

#include <iostream>
#include <cmath> // For the standard ceil function
using namespace std;

// Function to get the fractional part of a float number
float getFractionPart(float number) {
    return number - int(number); // Subtract the integer part to get the fraction
}

// Custom function to calculate the ceiling of a float number
int myCeil(float number) {
    float fractionPart = getFractionPart(number);

    // If the number has a fractional part
    if (abs(fractionPart) > 0) {
        if (number > 0) {
            return int(number) + 1; // For positive numbers, add 1 to the integer part
        } else {
            return int(number); // For negative numbers, return the integer part as is
        }
    } else {
        return int(number); // If no fractional part, return the number as an integer
    }
}

// Function to read a float number from the user
float readFloatNumber() {
    float number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

int main() {
    // Read the number from the user
    float number = readFloatNumber();

    // Display the results
    cout << "Custom myCeil result: " << myCeil(number) << endl;
    cout << "C++ ceil result: " << ceil(number) << endl;

    return 0;
}
