/*
 * Program to Calculate Rectangle Area Using Diagonal and Side
 * This program reads the length of one side and the diagonal of the rectangle,
 * calculates its area using the formula: Area = a * sqrt(d^2 - a^2), and prints the result.
 */

#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

// Function to read inputs from the user
void readInputs(float& side, float& diagonal) {
    cout << "Enter the length of one side (side): ";
    cin >> side;

    cout << "Enter the length of the diagonal (diagonal): ";
    cin >> diagonal;
}

// Function to calculate the rectangle area using the formula
float calculateRectangleArea(float side, float diagonal) {
    return side * sqrt(pow(diagonal, 2) - pow(side, 2)); // Area = side * sqrt(diagonal^2 - side^2)
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the rectangle is: " << area << endl;
}

int main() {
    float side, diagonal;

    // Read the inputs
    readInputs(side, diagonal);
    printResult(calculateRectangleArea(side, diagonal));

    return 0;
}
