/*
 * Program to Print Numbers in Reverse Order
 * This program reads a number from the user and prints all numbers
 * from the entered number down to 1.
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

// Function to print numbers from the given number down to 1
void printNumbersDownFrom(int startNumber) {
    for (int current = startNumber; current >= 1; current--) {
        cout << current << endl;
    }
}

int main() {
    // Get the input number and print the range in reverse
    printNumbersDownFrom(getInputNumber());
    return 0;
}
