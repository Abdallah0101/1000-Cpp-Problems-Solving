/*
 * Sum of Two Arrays
 * This program generates two arrays filled with random numbers between 1 and 100.
 * It calculates the element-wise sum of the two arrays and stores the result in a third array.
 */

#include <iostream>
#include <ctime>
using namespace std;

// Function to generate a random number within a specified range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to read a positive number from the user
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Function to fill an array with random numbers
void fillArrayWithRandomNumbers(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = generateRandomNumber(1, 100);
    }
}

// Function to calculate the element-wise sum of two arrays
void calculateArraySum(const int arr1[], const int arr2[], int arrSum[], int length) {
    for (int i = 0; i < length; i++) {
        arrSum[i] = arr1[i] + arr2[i];
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

    int arr1[100], arr2[100], arrSum[100];
    int arrLength = readPositiveNumber("How many elements? ");

    // Fill the arrays with random numbers
    fillArrayWithRandomNumbers(arr1, arrLength);
    fillArrayWithRandomNumbers(arr2, arrLength);

    // Calculate the sum of the two arrays
    calculateArraySum(arr1, arr2, arrSum, arrLength);

    // Print the arrays and their sum
    cout << "\nArray 1 elements:\n";
    printArray(arr1, arrLength);

    cout << "\nArray 2 elements:\n";
    printArray(arr2, arrLength);

    cout << "\nSum of Array 1 and Array 2 elements:\n";
    printArray(arrSum, arrLength);

    return 0;
}
