/*
 * Program to Calculate the Area of a Circumscribed Circle Around a Triangle
 * This program reads the three sides (a, b, c) of a triangle,
 * calculates the area of the circumcircle using the formula:
 * Area = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))),
 * where p = (a + b + c) / 2.
 */

#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

// Function to read the sides of the triangle
void readSides(float& a, float& b, float& c) {
    cout << "Enter the first side of the triangle (a): ";
    cin >> a;

    cout << "Enter the second side of the triangle (b): ";
    cin >> b;

    cout << "Enter the third side of the triangle (c): ";
    cin >> c;
}

// Function to calculate the semi-perimeter (p) of the triangle
float calculateSemiPerimeter(float a, float b, float c) {
    return (a + b + c) / 2;
}

// Function to calculate the area of the circumcircle
float calculateCircumcircleArea(float a, float b, float c) {
    float p = calculateSemiPerimeter(a, b, c); // Semi-perimeter
    float areaOfTriangle = sqrt(p * (p - a) * (p - b) * (p - c)); // Heron's formula for triangle area
    return (a * b * c) / (4 * areaOfTriangle); // Circumcircle area
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the circumscribed circle is: " << area << endl;
}

int main() {
    float a, b, c;

    // Read the sides of the triangle
    readSides(a, b, c);

    // Calculate and print the area of the circumcircle
    float area = calculateCircumcircleArea(a, b, c);
    printResult(area);

    return 0;
}
