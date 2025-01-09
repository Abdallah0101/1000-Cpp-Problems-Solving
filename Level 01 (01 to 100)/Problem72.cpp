/*
 * Count Occurrences in an Array
 * This program allows the user to input an array of integers and a specific number.
 * It calculates how many times the specified number appears in the array.
 * The program includes:
 * - A function to read a positive number.
 * - A function to input array elements from the user.
 * - A function to count occurrences of a specific number in the array.
 * - A function to display the array.
 */

#include <iostream>
using namespace std;

// Function to read a positive number from the user
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0); // Ensure input is positive
    return number;
}

// Function to read an array of integers from the user
void readArray(int arr[], int& arrLength) {
    cout << "\nEnter the number of elements: ";
    cin >> arrLength;

    cout << "\nEnter array elements:\n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int arrLength) {
    cout << "Array elements: ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to count the number of times a number is repeated in an array
int countOccurrences(int number, const int arr[], int arrLength) {
    int count = 0;
    for (int i = 0; i < arrLength; i++) {
        if (number == arr[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[100], arrLength, numberToCheck;

    // Read array from the user
    readArray(arr, arrLength);

    // Read the number to check for repetitions
    numberToCheck = readPositiveNumber("\nEnter the number you want to check: ");

    // Print the original array
    cout << "\nOriginal Array: ";
    printArray(arr, arrLength);

    // Print the number of times the number is repeated
    cout << "\nNumber " << numberToCheck << " is repeated ";
    cout << countOccurrences(numberToCheck, arr, arrLength) << " time(s)\n";

    return 0;
}
