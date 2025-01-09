/*
 * Custom Square Root Function
 * This program implements a custom square root function (`mySqrt`) 
 * and compares its result with the standard C++ `sqrt` function.
 */

#include <iostream>
#include <cmath> // For the standard sqrt function
using namespace std;

// Custom function to calculate the square root of a number
float mySqrt(float number) {
    return pow(number, 0.5); // Use the power function with 0.5 exponent
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
    cout << "Custom mySqrt result: " << mySqrt(number) << endl;
    cout << "C++ sqrt result: " << sqrt(number) << endl;

    return 0;
}
