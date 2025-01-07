/*
 * Program to Validate Age in a Specified Range
 * This program reads the user's age, validates it within a specific range,
 * and prints whether the age is valid or invalid. It also ensures the user enters
 * a valid age by continuously prompting until a valid age is entered.
 */

#include <iostream>

using namespace std;

// Function to read the user's age
int readAge() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

// Function to validate if a number is within a given range
bool isNumberInRange(int number, int rangeStart, int rangeEnd) {
    return (number >= rangeStart && number <= rangeEnd);
}

// Function to repeatedly read an age until it is within the specified range
int readUntilAgeBetween(int rangeStart, int rangeEnd) {
    int age;
    do {
        cout << "Enter an age between " << rangeStart << " and " << rangeEnd << ": ";
        cin >> age;
    } while (!isNumberInRange(age, rangeStart, rangeEnd));
    return age;
}

// Function to print whether the age is valid or invalid
void printAgeValidationResult(int age, int rangeStart, int rangeEnd) {
    if (isNumberInRange(age, rangeStart, rangeEnd)) {
        cout << age << " is a valid age.\n";
    } else {
        cout << age << " is an invalid age.\n";
    }
}

int main() {
    const int minAge = 18; // Minimum valid age
    const int maxAge = 45; // Maximum valid age

    // Read age until it is within the valid range
    int validAge = readUntilAgeBetween(minAge, maxAge);

    // Print validation result for the valid age
    printAgeValidationResult(validAge, minAge, maxAge);

    return 0;
}
