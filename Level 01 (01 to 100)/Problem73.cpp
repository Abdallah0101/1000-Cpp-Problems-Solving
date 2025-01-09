/*
 * Fill an Array with Random Numbers
 * This program generates a user-defined array filled with random numbers between 1 and 100.
 * The user specifies the number of elements in the array.
 * The program prints the generated array elements in a clear format.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to generate a random number within a range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to fill an array with random numbers
void fillArrayWithRandomNumbers(int arr[], int& arrLength) {
    cout << "\nEnter the number of elements: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = generateRandomNumber(1, 100);
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int arrLength) {
    cout << "Array elements: ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    int arr[100], arrLength;

    // Fill the array with random numbers and display them
    fillArrayWithRandomNumbers(arr, arrLength);
    printArray(arr, arrLength);

    return 0;
}
