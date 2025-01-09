/*
 * Find Number in an Array
 * This program generates an array of random numbers, allows the user to search for a specific number,
 * and displays the position (index) of the number in the array if found, or a message if it is not found.
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

// Function to search for a number in an array and return its index or -1 if not found
int findNumberPositionInArray(int number, const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == number) {
            return i; // Return the index if the number is found
        }
    }
    return -1; // Return -1 if the number is not found
}

// Function to read a number from the user
int readNumber(const string& message) {
    int number;
    cout << message;
    cin >> number;
    return number;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int arr[100], arrayLength;

    // Fill the array with random numbers and print it
    fillArrayWithRandomNumbers(arr, arrayLength);
    cout << "\nArray elements:\n";
    printArray(arr, arrayLength);

    // Read the number to search for
    int numberToFind = readNumber("\nPlease enter a number to search for: ");
    cout << "\nNumber you are looking for: " << numberToFind << endl;

    // Find the position of the number in the array
    int numberPosition = findNumberPositionInArray(numberToFind, arr, arrayLength);

    // Display the result
    if (numberPosition == -1) {
        cout << "The number is not found.\n";
    } else {
        cout << "The number is found at index: " << numberPosition << endl;
        cout << "The number's position (1-based): " << numberPosition + 1 << endl;
    }

    return 0;
}
