/*
 * Calculate Powers of a Number
 * This program asks the user to enter a number and calculates the square, cube, and fourth power of the number.
 */

#include <iostream>
using namespace std;

// Function to read a number from the user
int readNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

// Function to calculate the square of a number
int calculateSquare(int number) {
    return number * number;
}

// Function to calculate the cube of a number
int calculateCube(int number) {
    return number * number * number;
}

// Function to calculate the fourth power of a number
int calculateFourthPower(int number) {
    return number * number * number * number;
}

// Function to print the results
void printPowers(int number, int square, int cube, int fourthPower) {
    cout << "Number^2: " << square << endl;
    cout << "Number^3: " << cube << endl;
    cout << "Number^4: " << fourthPower << endl;
}

int main() {
    // Read the number
    int number = readNumber();

    // Calculate powers
    int square = calculateSquare(number);
    int cube = calculateCube(number);
    int fourthPower = calculateFourthPower(number);

    // Print the results
    printPowers(number, square, cube, fourthPower);

    return 0;
}
