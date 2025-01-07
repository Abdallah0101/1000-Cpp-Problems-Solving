/*
 * Check and Display Perfect Number Status
 * This program reads a positive number from the user and determines if it is a perfect number.
 * A perfect number is a number that is equal to the sum of its proper divisors.
 */

#include <iostream>
#include <string>
using namespace std;

// Function to read a positive integer from the user
int readPositiveInteger(const string& promptMessage) {
    int number = 0;
    do {
        cout << promptMessage << endl;
        cin >> number;
    } while (number <= 0); // Ensure the user enters a positive number
    return number;
}

// Function to check if a number is a perfect number
bool isPerfectNumber(int number) {
    int sumOfDivisors = 0;
    for (int divisor = 1; divisor < number; divisor++) { // Iterate through all proper divisors
        if (number % divisor == 0) { // Check if divisor
            sumOfDivisors += divisor; // Add divisor to the sum
        }
    }
    return number == sumOfDivisors; // Return true if the number is perfect
}

// Function to print the result
void printPerfectNumberResult(int number) {
    if (isPerfectNumber(number)) {
        cout << number << " is a Perfect Number.\n";
    } else {
        cout << number << " is NOT a Perfect Number.\n";
    }
}

int main() {
    // Read a number and display if it is a perfect number
    printPerfectNumberResult(readPositiveInteger("Please enter a positive number:"));
    return 0;
}
