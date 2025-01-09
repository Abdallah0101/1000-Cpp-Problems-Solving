/*
 * Copy Array in Reverse Order
 * This program generates an array filled with random numbers between 1 and 100.
 * It creates a second array that contains the elements of the original array in reverse order.
 */

#include <iostream>
#include <ctime>
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

// Function to copy the elements of one array into another in reverse order
void copyArrayInReverseOrder(const int source[], int destination[], int length) {
    for (int i = 0; i < length; i++) {
        destination[i] = source[length - 1 - i];
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int originalArray[100], arrayLength;
    int reversedArray[100];

    // Fill the original array with random numbers
    fillArrayWithRandomNumbers(originalArray, arrayLength);

    // Copy the original array into the reversed array
    copyArrayInReverseOrder(originalArray, reversedArray, arrayLength);

    // Print the arrays
    cout << "\nOriginal Array elements:\n";
    printArray(originalArray, arrayLength);

    cout << "\nReversed Array elements:\n";
    printArray(reversedArray, arrayLength);

    return 0;
}
