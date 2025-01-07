/*
 * Program to Find the Maximum of Three Numbers
 * This program reads three numbers from the user and determines the largest number among them.
 */

#include <iostream>

using namespace std;

// Function to read three numbers from the user
void readThreeNumbers(int& num1, int& num2, int& num3) {
    cout << "Type your first number: ";
    cin >> num1;

    cout << "Type your second number: ";
    cin >> num2;

    cout << "Type your third number: ";
    cin >> num3;
}

// Function to find the maximum of three numbers
int maxNumber(int num1, int num2, int num3) {
    if (num1 >= num2) {
        if (num1 >= num3) {
            return num1;
        } else {
            return num3;
        }
    } else {
        if (num2 >= num3) {
            return num2;
        } else {
            return num3;
        }
    }

}

// Function to print the result
void printResult(int result) {
    cout << "The maximum number is: " << result << endl;
}

int main() {
    int num1, num2, num3;

    // Read three numbers from the user
    readThreeNumbers(num1, num2, num3);

    // Find the maximum number and print the result
    printResult(maxNumber(num1, num2, num3));

    return 0;
}
