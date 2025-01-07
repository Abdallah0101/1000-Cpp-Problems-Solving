/*
 * Program to Calculate Circle Area
 * This program reads the radius (r) of a circle from the user,
 * calculates its area using the formula: Area = π * r^2, and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read the radius of the circle from the user
void readRadius(float& radius) {
    cout << "Enter the radius of the circle (r): ";
    cin >> radius;
}

// Function to calculate the area of the circle
float calculateCircleArea(float radius) {
    const float PI = 3.1415927f; // Define as a float
    return PI * radius * radius; // Area = π * r^2
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the circle is: " << area << endl;
}

int main() {
    float radius;

    // Read the radius of the circle
    readRadius(radius);

    // Calculate and print the area of the circle
    float area = calculateCircleArea(radius);
    printResult(area);

    return 0;
}
