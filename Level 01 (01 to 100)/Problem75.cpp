/*
 * Find the Minimum Number in an Array
 * This program generates an array with a user-specified number of elements, filled with random numbers between 1 and 100.
 * It prints the array elements and identifies the minimum number within the array.
 */

#include <iostream>
using namespace std;

// Function to generate a random number within a specified range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to fill an array with random numbers
void fillArrayWithRandomNumbers(int arr[], int& length) {
    cout << "\nEnter the number of elements: ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        arr[i] = generateRandomNumber(1, 100);
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find the minimum number in an array
int findMinInArray(const int arr[], int length) {
    int min = arr[0]; // Initialize min with the first element
    for (int i = 1; i < length; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int arr[100], length;

    // Fill the array with random numbers
    fillArrayWithRandomNumbers(arr, length);

    // Print the array elements
    cout << "\nArray Elements: ";
    printArray(arr, length);

    // Find and print the minimum number in the array
    cout << "\nMinimum Number: " << findMinInArray(arr, length) << endl;

    return 0;
}

// Using nullptr instead of NULL for modern C++ (C++11 and later) as it is type-safe and unambiguous.
