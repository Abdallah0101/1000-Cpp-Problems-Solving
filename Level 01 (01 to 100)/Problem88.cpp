/*
 * Copy Odd Numbers to a New Array
 * This program generates an array of random numbers, filters odd numbers, and copies them into a new array.
 */

#include <iostream>
#include <ctime>
using namespace std;

// Function to generate a random number within a given range
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

// Function to add an element to an array and increase its length
void addArrayElement(int number, int arr[], int& length) {
    arr[length] = number;
    length++;
}

// Function to copy only odd numbers from the source array to the destination array
void copyOddNumbers(const int source[], int destination[], int sourceLength, int& destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
        if (source[i] % 2 != 0) { // Check if the number is odd
            addArrayElement(source[i], destination, destinationLength);
        }
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int sourceArray[100], sourceLength = 0;
    int destinationArray[100], destinationLength = 0;

    // Fill the source array with random numbers
    fillArrayWithRandomNumbers(sourceArray, sourceLength);

    // Copy odd numbers from the source array to the destination array
    copyOddNumbers(sourceArray, destinationArray, sourceLength, destinationLength);

    // Print the original and the filtered arrays
    cout << "\nSource Array Elements:\n";
    printArray(sourceArray, sourceLength);

    cout << "\nDestination Array (Odd Numbers):\n";
    printArray(destinationArray, destinationLength);

    return 0;
}
