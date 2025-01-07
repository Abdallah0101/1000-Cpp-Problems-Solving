/*
 * Prime Numbers from 1 to N
 * This program reads a positive number N from the user and prints all prime numbers from 1 to N.
 */

#include <iostream>
#include <string>
using namespace std;

// Enum to represent the prime status of a number
enum class PrimeStatus { Prime = 1, NotPrime = 2 };

// Function to read a positive integer from the user
int readPositiveInteger(const string& promptMessage) {
    int number = 0;
    do {
        cout << promptMessage << endl;
        cin >> number;
    } while (number <= 0); // Keep prompting until a positive number is entered
    return number;
}

// Function to determine if a number is prime
PrimeStatus getPrimeStatus(int number) {
    if (number <= 1) {
        return PrimeStatus::NotPrime; // 1 and below are not prime numbers
    }
    int divisorLimit = number / 2; // Check divisors up to half the number
    for (int divisor = 2; divisor <= divisorLimit; divisor++) {
        if (number % divisor == 0) {
            return PrimeStatus::NotPrime; // Return NotPrime if divisible by any number
        }
    }
    return PrimeStatus::Prime; // Return Prime if no divisors found
}

// Function to print all prime numbers from 1 to a given limit
void printPrimeNumbersUpTo(int limit) {
    cout << "\nPrime Numbers from 1 to " << limit << " are:\n";
    for (int number = 1; number <= limit; number++) {
        if (getPrimeStatus(number) == PrimeStatus::Prime) {
            cout << number << endl; // Print the prime number
        }
    }
}

int main() {
    int limit = readPositiveInteger("Please enter a positive number:");
    printPrimeNumbersUpTo(limit); // Display all prime numbers from 1 to the entered number
    return 0;
}
