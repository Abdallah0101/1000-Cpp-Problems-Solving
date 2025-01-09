/*
 * Copy Distinct Numbers to a New Array
 * This program copies distinct numbers from a source array to a destination array,
 * ensuring that duplicate numbers are not included in the destination array.
 */

#include <iostream>
using namespace std;

// Function to fill the source array with predefined values
void fillArrayWithValues(int arr[], int& length) {
    length = 10;
    arr[0] = 10; arr[1] = 10; arr[2] = 10;
    arr[3] = 50; arr[4] = 50; arr[5] = 70;
    arr[6] = 70; arr[7] = 70; arr[8] = 70; arr[9] = 90;
}

// Function to print the elements of an array
void printArray(const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to find the position of a number in an array
short findNumberPositionInArray(int number, const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == number) {
            return i; // Return the index
        }
    }
    return -1; // Number not found
}

// Function to check if a number exists in an array
bool isNumberInArray(int number, const int arr[], int length) {
    return findNumberPositionInArray(number, arr, length) != -1;
}

// Function to add a number to an array
void addNumberToArray(int number, int arr[], int& length) {
    arr[length] = number; // Add the number at the end
    length++; // Increment the length
}

// Function to copy distinct numbers from the source array to the destination array
void copyDistinctNumbers(const int source[], int destination[], int sourceLength, int& destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
        if (!isNumberInArray(source[i], destination, destinationLength)) {
            addNumberToArray(source[i], destination, destinationLength);
        }
    }
}

int main() {
    int sourceArray[100], sourceLength = 0;
    int distinctArray[100], distinctLength = 0;

    // Fill the source array with predefined values
    fillArrayWithValues(sourceArray, sourceLength);

    // Print the source array
    cout << "\nSource Array Elements:\n";
    printArray(sourceArray, sourceLength);

    // Copy distinct numbers to the destination array
    copyDistinctNumbers(sourceArray, distinctArray, sourceLength, distinctLength);

    // Print the distinct numbers array
    cout << "\nDistinct Numbers Array:\n";
    printArray(distinctArray, distinctLength);

    return 0;
}
