/*
 * Program to Calculate the Factorial of a Positive Number
 * This program reads a positive number from the user, calculates its factorial,
 * and prints the result.
 */

#include <iostream>
using namespace std;

// Function to read a positive number from the user
int readPositiveNumber() {
    int number;
    do {
        cout << "Please enter a positive number: ";
        cin >> number;
        if (number < 0) {
            cout << "The number must be positive. Try again.\n";
        }
    } while (number < 0); // Keep prompting until a positive number is entered
    return number;
}

// Function to calculate the factorial of a number
long long calculateFactorial(int number) {
    long long factorial = 1; // Initialize factorial as 1
    for (int i = 1; i <= number; i++) {
        factorial *= i; // Multiply the current number to factorial
    }
    return factorial; // Return the calculated factorial
}

// Function to print the factorial result
void printFactorialResult(long long factorial) {
    cout << "The factorial is: " << factorial << endl;
}

int main() {


    // Print the factorial result
    printFactorialResult(calculateFactorial(readPositiveNumber()));

    return 0;
}
