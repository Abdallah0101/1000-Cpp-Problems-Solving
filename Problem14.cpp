/*
 * Program to Swap Two Numbers
 * This program reads two numbers, prints them, swaps their values, and prints them again.
 */

#include <iostream>

using namespace std;

// Function to read two numbers from the user
void ReadNumbers(int& num1, int& num2) {
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

// Function to swap two numbers
void Swap(int& a, int& b) {
    int temp = a; // Use a temporary variable to hold one value
    a = b;
    b = temp;
}

// Function to print two numbers
void PrintNumbers(int num1, int num2) {
    cout << "Number 1: " << num1 << ", Number 2: " << num2 << endl;
}

int main() {
    int num1, num2;

    // Read the numbers
    ReadNumbers(num1, num2);

    // Print the numbers before swapping
    cout << "Before Swapping:" << endl;
    PrintNumbers(num1, num2);

    // Swap the numbers
    Swap(num1, num2);

    // Print the numbers after swapping
    cout << "After Swapping:" << endl;
    PrintNumbers(num1, num2);

    return 0;
}
