/*
 * Copy Array Using Add Array Element Function
 * This program generates an array of random numbers, then copies its elements
 * to another array using an "add array element" function.
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

// Function to add an element to the array and increase its length
void addArrayElement(int number, int arr[], int& length) {
    arr[length] = number;
    length++;
}

// Function to copy elements from one array to another using the addArrayElement function
void copyArrayUsingAddElement(const int source[], int destination[], int sourceLength, int& destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
        addArrayElement(source[i], destination, destinationLength);
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int sourceArray[100], sourceLength = 0, destinationArray[100], destinationLength = 0;

    // Fill the source array with random numbers
    fillArrayWithRandomNumbers(sourceArray, sourceLength);

    // Copy elements from the source array to the destination array
    copyArrayUsingAddElement(sourceArray, destinationArray, sourceLength, destinationLength);

    // Print both arrays
    cout << "\nSource Array Elements:\n";
    printArray(sourceArray, sourceLength);

    cout << "\nDestination Array Elements After Copy:\n";
    printArray(destinationArray, destinationLength);

    return 0;
}
