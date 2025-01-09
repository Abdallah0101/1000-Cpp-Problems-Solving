/*
 * Calculate the Average of Array Elements
 * This program generates an array filled with random numbers between 1 and 100.
 * It calculates and prints the average of all elements in the array.
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
    cout << "Array Elements: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Function to calculate the sum of elements in an array
int calculateArraySum(const int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of elements in an array
float calculateArrayAverage(const int arr[], int length) {
    return static_cast<float>(calculateArraySum(arr, length)) / length;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int arr[100], length;

    // Fill the array with random numbers
    fillArrayWithRandomNumbers(arr, length);

    // Print the array elements
    printArray(arr, length);

    // Calculate and print the average of array elements
    cout << "\nAverage of all numbers: " << calculateArrayAverage(arr, length) << endl;

    return 0;
}
