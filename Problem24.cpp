/*
 * Program to Validate Age in a Specified Range
 * This program reads the user's age, validates it within a specific range,
 * and prints whether the age is valid or invalid.
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

// Function to print whether the age is valid or invalid
void printAgeValidationResult(int age) {
    if (isNumberInRange(age, 18, 45)) {
        cout << age << " is a valid age.\n";
    } else {
        cout << age << " is an invalid age.\n";
    }
}

int main() {
    // Read the age and print the validation result
    printAgeValidationResult(readAge());
    return 0;
}
