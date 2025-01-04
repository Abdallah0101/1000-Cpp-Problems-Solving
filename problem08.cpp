/*
 * Program to Check Passing Status
 * This program reads a student's mark, determines if they passed, and prints the result.
 */

#include <iostream>

using namespace std;

// Function to read a mark from the user
float readMark() {
    float mark;
    cout << "Enter your degree: ";
    cin >> mark;
    return mark;
}

// Function to check if the mark indicates passing
bool isPassed(float mark) {
    return mark > 50; // Returns true if the mark is greater than 50
}

// Function to print the result based on passing status
void printResult(bool result) {
    if (result) { // Simplified condition check
        cout << "Passed" << endl;
    } else {
        cout << "Failed" << endl;
    }
}

int main() {
    printResult(isPassed(readMark()));            // Print the result
    return 0;
}