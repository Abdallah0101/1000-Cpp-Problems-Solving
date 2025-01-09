/*
 * Count Negative Numbers in an Array
 * This program generates an array of random numbers, prints the array,
 * and counts the total number of negative numbers in the array.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

// Function to generate a random number in a given range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to fill an array with random numbers
void fillArrayWithRandomNumbers(int arr[], int& length) {
    cout << "\nEnter the number of elements: ";
    cin >> length;
    for (int i = 0; i < length; i++) {
        arr[i] = generateRandomNumber(-100, 100); // Random numbers between -100 and 100
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to count the number of negative numbers in an array
int countNegativeNumbers(const int arr[], int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) { // Check if the number is negative
            count++;
        }
    }
    return count;
}

int main() {
    // Seed the random number generator (only once)
    srand(static_cast<unsigned>(time(nullptr)));

    int arr[100], length;

    // Fill the array with random numbers and print it
    fillArrayWithRandomNumbers(arr, length);
    cout << "\nArray Elements: ";
    printArray(arr, length);

    // Count and display the number of negative numbers
    cout << "\nThe count of negative numbers is: " << countNegativeNumbers(arr, length) << endl;

    return 0;
}
