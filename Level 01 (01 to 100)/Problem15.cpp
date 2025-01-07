/*
 * Program to Calculate the Area of a Rectangle
 * This program reads the length and width of a rectangle, calculates its area, and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read two numbers from the user (length and width)
void ReadNumbers(float& length, float& width) {
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;
}

// Function to calculate the area of the rectangle
float CalculateRectangleArea(float length, float width) {
    return length * width;
}

// Function to print the result
void PrintResult(float area) {
    cout << "The area of the rectangle is: " << area << endl;
}

int main() {
    float length, width;

    // Read the dimensions of the rectangle
    ReadNumbers(length, width);

    // Calculate and print the area
    PrintResult(CalculateRectangleArea(length, width));

    return 0;
}
