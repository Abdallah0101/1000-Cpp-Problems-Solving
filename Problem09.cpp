/*
 * Program to Calculate the Sum of Three Numbers
 * This program reads three numbers from the user, calculates their sum, and displays the result.
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

// Function to print the result
void printResult(int total) {
    cout << "The sum of the numbers is: " << total << endl;
}

int main() {
    int num1, num2, num3;

    // Read numbers from the user
    readNumbers(num1, num2, num3);
    printResult(calculateSum(num1, num2, num3));

    return 0;
}
