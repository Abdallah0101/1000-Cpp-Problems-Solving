/*
 * Program to Calculate the Sum and Average of Three Numbers
 * This program reads three numbers from the user, calculates their sum and average, and displays the results.
 */

#include <iostream>

using namespace std;

// Function to read three numbers from the user
void readNumbers(int& num1, int& num2, int& num3) {
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;
}

// Function to calculate the sum of three numbers
int calculateSum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

// Function to calculate the average of three numbers
float calculateAverage(int total) {
    return static_cast<float>(total) / 3; // Ensures floating-point division
}

// Function to print the results
void printResult(int total) {
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << calculateAverage(total) << endl;
}

int main() {
    int num1, num2, num3;

    // Read numbers from the user
    readNumbers(num1, num2, num3);

    // Calculate the sum and print the results
    int total = calculateSum(num1, num2, num3);
    printResult(total);

    return 0;
}
