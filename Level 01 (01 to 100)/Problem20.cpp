/*
 * Program to Calculate the Area of a Circle Inscribed in a Square
 * This program reads the side length (A) of a square,
 * calculates the area of the circle inscribed within it using the formula: Area = π * (A^2 / 4),
 * and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read the side length of the square from the user
void readSideLength(float& sideLength) {
    cout << "Enter the side length of the square (A): ";
    cin >> sideLength;
}

// Function to calculate the area of the inscribed circle
float calculateCircleArea(float sideLength) {
    const double PI = 3.141592653589793238; // Define π
    return PI * (sideLength * sideLength) / 4; // Area = π * (A^2 / 4)
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the inscribed circle is: " << area << endl;
}

int main() {
    float sideLength;

    // Read the side length of the square
    readSideLength(sideLength);

    // Calculate and print the area of the inscribed circle
    printResult(calculateCircleArea(sideLength));

    return 0;
}
