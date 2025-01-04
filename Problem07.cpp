/*
 * Divide a Number by Two
 * This program reads a number from the user, divides it by 2, and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read a number from the user
int readNumber() {
    int number;
    cout << "Please type a number: ";
    cin >> number;
    return number;
}

// Function to divide a number by 2
float divideNumberByTwo(int number) {
    return static_cast<float>(number) / 2; // Ensures proper floating-point division
}

// Function to print the result
void printResult(float result) {
    cout << "The result of the number you entered divided by 2 is " << result << endl;
}

int main() {
    printResult(divideNumberByTwo(readNumber()));                            // Print the result
    return 0;
}
