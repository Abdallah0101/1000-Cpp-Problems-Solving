/*
 * Program to Compare Two Numbers
 * This program reads two numbers from the user and determines which one is greater.
 */

#include <iostream>

using namespace std;

// Function to read two numbers from the user
void readTwoNumbers(int& num1, int& num2) {
    cout << "Type your first number: ";
    cin >> num1;

    cout << "Type your second number: ";
    cin >> num2;
}

// Function to check if the first number is greater than the second
bool isNum1Greater(int num1, int num2) {
    return num1 > num2;
}

// Function to print the result of the comparison
void printResult(bool isGreater) {
    if (isGreater) {
        cout << "Num1 is bigger.\n";
    } else {
        cout << "Num2 is bigger.\n";
    }
}

int main() {
    int num1, num2;

    // Read two numbers from the user
    readTwoNumbers(num1, num2);

    // Check which number is greater and print the result
    printResult(isNum1Greater(num1, num2));

    return 0;
}
