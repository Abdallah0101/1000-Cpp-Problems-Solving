/*
 * Determine if a Number is Even or Odd
 * This program reads a number from the user, checks if it is even or odd, and displays the result.
 */

#include <iostream>

using namespace std;

// Enum to represent the type of number
enum NumberType { Odd = 1, Even = 2 };

// Function to read a number from the user
int readNumber() {
    int number;
    cout << "Please type a number: ";
    cin >> number;
    return number;
}

// Function to determine if the number is odd or even
NumberType checkNumberType(int num) {
    return (num % 2 == 0) ? Even : Odd;
}

// Function to print whether the number is odd or even
void printNumberType(NumberType numberType) {
    if (numberType == Even) {
        cout << "\nNumber is Even.\n";
    } else {
        cout << "\nNumber is Odd.\n";
    }
}

int main() {
    // Read, determine type, and print the result
    printNumberType(checkNumberType(readNumber()));

    return 0;
}
