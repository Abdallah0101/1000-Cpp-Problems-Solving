/*
 * Program to Calculate Circle Area Inscribed in an Isosceles Triangle
 * This program reads the side length (a) and base (b) of an isosceles triangle,
 * calculates the area of the circle inscribed in the triangle, and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read inputs from the user
void readInputs(float& side, float& base) {
    cout << "Enter the side length of the isosceles triangle (a): ";
    cin >> side;

    cout << "Enter the base of the isosceles triangle (b): ";
    cin >> base;
}

// Function to calculate the area of the circle inscribed in the triangle
float calculateCircleArea(float side, float base) {
    const double PI = 3.141592653589793238; // Define π
    float numerator = base * base * (2 * side - base); // b^2 * (2 * a - b)
    float denominator = 4 * (2 * side + base);         // 4 * (2 * a + b)
    return PI * (numerator / denominator);             // Area = π * (numerator / denominator)
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the inscribed circle is: " << area << endl;
}

int main() {
    float side, base;

    // Read the side and base of the isosceles triangle
    readInputs(side, base);
    printResult(calculateCircleArea(side, base));


    return 0;
}
