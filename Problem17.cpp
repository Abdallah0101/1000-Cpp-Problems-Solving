/*
 * Program to Calculate Triangle Area
 * This program reads the base (a) and height (h) of a triangle from the user,
 * calculates its area using the formula: Area = 1/2 * a * h, and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read the base and height of the triangle from the user
void readInputs(float& base, float& height) {
    cout << "Enter the base of the triangle (a): ";
    cin >> base;

    cout << "Enter the height of the triangle (h): ";
    cin >> height;
}

// Function to calculate the area of the triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height; // Area = 1/2 * base * height
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the triangle is: " << area << endl;
}

int main() {
    float base, height;

    // Read the base and height of the triangle
    readInputs(base, height);

    // Calculate and print the area of the triangle
    printResult(calculateTriangleArea(base, height));

    return 0;
}
