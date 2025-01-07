/*
 * Sum Numbers Until Sentinel Value (-99)
 * This program reads numbers from the user and calculates their sum.
 * The program stops reading when the user enters -99 and prints the total sum.
 */

#include <iostream>
using namespace std;

// Function to calculate the sum of numbers entered by the user
int calculateSum() {
    int sum = 0;       // Initialize sum to 0
    int number = 0;    // Variable to store the user input

    cout << "Enter numbers to sum (enter -99 to stop): " << endl;
    while (true) {
        cin >> number; // Read the input
        if (number == -99) {
            break;     // Stop if the sentinel value is entered
        }
        sum += number; // Add the number to the sum
    }

    return sum; // Return the total sum
}

// Function to print the result
void printSum(int sum) {
    cout << "The sum of the numbers is: " << sum << endl;
}

int main() {
    // Calculate the sum
    int sum = calculateSum();

    // Print the result
    printSum(sum);

    return 0;
}
