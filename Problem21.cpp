/*
 * Program to Calculate Circle Area Along the Circumference
 * This program reads the circumference (L) of a circle from the user,
 * calculates its area using the formula: Area = (L^2) / (4 * π), and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read the circumference from the user
void readCircumference(float& circumference) {
    cout << "Enter the circumference of the circle (L): ";
    cin >> circumference;
}

// Function to calculate the area of the circle using the circumference
float calculateCircleArea(float circumference) {
    const double PI = 3.141592653589793238; // Define π
    return (circumference * circumference) / (4 * PI); // Area = (L^2) / (4 * π)
}

// Function to print the result
void printResult(float area) {
    cout << "The area of the circle is: " << area << endl;
}

int main() {
    float circumference;

    // Read the circumference of the circle
    readCircumference(circumference);

    // Calculate and print the area of the circle
    float area = calculateCircleArea(circumference);
    printResult(area);

    return 0;
}
