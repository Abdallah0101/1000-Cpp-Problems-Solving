/*
 * Palindrome Number Check
 * This program checks whether a given positive number is a palindrome.
 * A number is considered a palindrome if it reads the same backward as forward.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to read a positive number from the user
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Function to reverse the digits of a number
int reverseNumber(int number) {
    int remainder = 0, reversedNumber = 0;
    while (number > 0) {
        remainder = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    return reversedNumber;
}

// Function to check if a number is a palindrome
bool isPalindromeNumber(int number) {
    return number == reverseNumber(number);
}

int main() {
    int number = readPositiveNumber("Please enter a positive number:");
    if (isPalindromeNumber(number)) {
        cout << "\nYes, it is a Palindrome number.\n";
    } else {
        cout << "\nNo, it is NOT a Palindrome number.\n";
    }
    return 0;
}
