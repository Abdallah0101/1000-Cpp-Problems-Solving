/*
 * Program to Calculate Circle Area Through Diameter
 * This program reads the diameter (D) of a circle from the user,
 * calculates its area using the formula: Area = (π * D^2) / 4, and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read the diameter of the circle from the user
void readDiameter(float& diameter) {
    cout << "Enter the diameter of the circle (D): ";
    cin >> diameter;
}

// Function to calculate the area of the circle using the diameter
float calculateCircleArea(float diameter) {
    const double PI = 3.141592653589793238; // Define π
    return (PI * diameter * diameter) / 4; // Area = (π * D^2) / 4
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the circle is: " << area << endl;
}

int main() {
    float diameter;

    // Read the diameter of the circle
    readDiameter(diameter);

    // Calculate and print the area of the circle
    printResult(calculateCircleArea(diameter));

    return 0;
}
