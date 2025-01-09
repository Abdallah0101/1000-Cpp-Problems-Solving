/*
 * Copy an Array
 * This program generates an array filled with random numbers between 1 and 100.
 * It creates a copy of the original array into a second array and prints both arrays.
 */

#include <iostream>
#include <ctime>
using namespace std;

// Function to generate a random number within a specified range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to fill an array with random numbers
void fillArrayWithRandomNumbers(int source[], int& length) {
    cout << "\nEnter the number of elements: ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        source[i] = generateRandomNumber(1, 100);
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to copy the contents of one array to another
void copyArray(const int source[], int destination[], int length) {
    for (int i = 0; i < length; i++) {
        destination[i] = source[i];
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int originalArray[100], arrayLength;

    // Fill the original array with random numbers
    fillArrayWithRandomNumbers(originalArray, arrayLength);

    int copiedArray[100];

    // Copy the original array to the copied array
    copyArray(originalArray, copiedArray, arrayLength);

    // Print both arrays
    cout << "\nOriginal Array elements:\n";
    printArray(originalArray, arrayLength);

    cout << "\nCopied Array elements:\n";
    printArray(copiedArray, arrayLength);

    return 0;
}
