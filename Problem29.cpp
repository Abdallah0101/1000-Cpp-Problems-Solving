/*
 * Program to Calculate the Sum of Even Numbers
 * This program reads a number from the user, checks if numbers are odd or even,
 * and calculates the sum of all even numbers from 1 to the entered number.
 */

#include <iostream>
using namespace std;

// Enum to define number types
enum NumberType { Odd, Even };

// Function to check if a number is odd or even
NumberType getNumberType(int number) {
    return (number % 2 != 0) ? Odd : Even;
}

// Function to calculate the sum of all even numbers up to the given number
int calculateSumOfEvenNumbers(int maxNumber) {
    int sum = 0; // Initialize sum to 0
    for (int current = 1; current <= maxNumber; current++) {
        if (getNumberType(current) == Even) { // Check if the number is even
            sum += current; // Add even number to the sum
        }
    }
    return sum; // Return the calculated sum
}

// Function to get a number from the user
int getInputNumber() {
    int number;
    cout << "Please enter a number: ";
    cin >> number; // Read the input number
    return number; // Return the entered number
}

// Function to print the result
void printSumOfEvenNumbers(int sum) {
    cout << "The sum of all even numbers from 1 to the number you entered is: " << sum << endl;
}

int main() {
    // Get the input number, calculate the sum of even numbers, and print the result
    printSumOfEvenNumbers(calculateSumOfEvenNumbers(getInputNumber()));

    return 0;
}
