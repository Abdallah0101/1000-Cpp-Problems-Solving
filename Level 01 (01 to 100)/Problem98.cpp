/*
 * Custom Floor Function
 * This program implements a custom floor function (`myFloor`) to find the largest integer
 * less than or equal to a given number. The result is compared with the built-in C++ `floor` function.
 */

#include <iostream>
#include <cmath> // For the standard floor function
using namespace std;

// Custom function to calculate the floor of a float number
int myFloor(float number) {
    if (number > 0) {
        return int(number); // For positive numbers, the integer part is the floor
    } else {
        return int(number) - 1; // For negative numbers, subtract 1 for the floor
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
    cout << "Custom myFloor result: " << myFloor(number) << endl;
    cout << "C++ floor result: " << floor(number) << endl;

    return 0;
}
