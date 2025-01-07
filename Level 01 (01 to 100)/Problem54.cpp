/*
 * Perfect Numbers from 1 to N
 * This program reads a positive number N from the user and prints all perfect numbers from 1 to N.
 * A perfect number is a number that is equal to the sum of its proper divisors (excluding itself).
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
    } while (number <= 0); // Keep prompting until a positive number is entered
    return number;
}

// Function to check if a number is a perfect number
bool isPerfectNumber(int number) {
    int sumOfDivisors = 0;
    for (int divisor = 1; divisor < number; divisor++) { // Loop through all proper divisors
        if (number % divisor == 0) { // Check if divisor
            sumOfDivisors += divisor; // Add to sum
        }
    }
    return number == sumOfDivisors; // Return true if sum equals the number
}

// Function to print all perfect numbers from 1 to a given limit
void printPerfectNumbersUpTo(int limit) {
    cout << "\nPerfect Numbers from 1 to " << limit << " are:\n";
    for (int number = 1; number <= limit; number++) {
        if (isPerfectNumber(number)) { // Check if the number is perfect
            cout << number << endl; // Print the perfect number
        }
    }
}

int main() {
    int limit = readPositiveInteger("Please enter a positive number:");
    printPerfectNumbersUpTo(limit); // Display all perfect numbers from 1 to the entered number
    return 0;
}
