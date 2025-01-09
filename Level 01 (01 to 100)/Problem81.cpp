/*
 * Shuffle Array Elements
 * This program generates an array with elements from 1 to N and shuffles them randomly.
 * It displays the array before and after shuffling.
 */

#include <iostream>
#include <ctime>
using namespace std;

// Function to read a positive number from the user
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Function to swap two integers
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to fill an array with numbers from 1 to N
void fillArrayWithSequentialNumbers(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = i + 1;
    }
}

// Function to generate a random number within a range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to shuffle the elements of an array
void shuffleArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        swapValues(
            arr[generateRandomNumber(0, length - 1)],
            arr[generateRandomNumber(0, length - 1)]
        );
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int arr[100];
    int arrLength = readPositiveNumber("\nEnter the number of elements: ");

    // Fill the array with sequential numbers and print it
    fillArrayWithSequentialNumbers(arr, arrLength);
    cout << "\nArray elements before shuffle:\n";
    printArray(arr, arrLength);

    // Shuffle the array and print it
    shuffleArray(arr, arrLength);
    cout << "\nArray elements after shuffle:\n";
    printArray(arr, arrLength);

    return 0;
}
