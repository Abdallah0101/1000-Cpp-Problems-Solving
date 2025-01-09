/*
 * Check if a Number Exists in an Array
 * This program generates an array of random numbers, allows the user to search for a specific number,
 * and checks if the number exists in the array.
 */

#include <iostream>
#include <ctime>
using namespace std;

// Function to read a number from the user
int readNumber(const string& message) {
    int number;
    cout << message;
    cin >> number;
    return number;
}

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

// Function to find the position of a number in an array
int findNumberPositionInArray(int number, const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == number) {
            return i; // Return the index if the number is found
        }
    }
    return -1; // Return -1 if the number is not found
}

// Function to check if a number exists in an array
bool isNumberInArray(int number, const int arr[], int length) {
    return findNumberPositionInArray(number, arr, length) != -1;
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
    int numberToSearch = readNumber("\nPlease enter a number to search for: ");
    cout << "\nNumber you are looking for: " << numberToSearch << endl;

    // Check if the number exists in the array and print the result
    if (isNumberInArray(numberToSearch, arr, arrayLength)) {
        cout << "Yes, the number is found :-)\n";
    } else {
        cout << "No, the number is not found :-(\n";
    }

    return 0;
}
