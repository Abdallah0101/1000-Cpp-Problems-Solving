/*
 * Program to Print Numbers from 1 to a Specified Number
 * This program reads a number from the user and prints all numbers from 1 to the entered number.
 */

#include <iostream>

using namespace std;

// Function to get a number from the user
int getInputNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

// Function to print numbers from 1 to the given number
void printNumbersUpTo(int maxNumber) {
    for (int current = 1; current <= maxNumber; current++) {
        cout << current << endl;
    }
}

int main() {
    // Get the input number and print the range
    printNumbersUpTo(getInputNumber());
    return 0;
}
