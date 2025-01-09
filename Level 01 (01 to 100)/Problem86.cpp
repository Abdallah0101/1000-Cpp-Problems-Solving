/*
 * Dynamic Array Input
 * This program allows the user to dynamically input numbers into an array.
 * The user can decide whether to add more numbers after each input.
 * The program displays the array elements and its length after input is complete.
 */

#include <iostream>
using namespace std;

// Function to read a number from the user
int readNumber(const string& message) {
    int number;
    cout << message;
    cin >> number;
    return number;
}

// Function to add an element to the array and increase its length
void addArrayElement(int number, int arr[], int& arrLength) {
    arr[arrLength] = number; // Add the number to the array
    arrLength++;             // Increment the array length
}

// Function to input numbers into the array from the user
void inputUserNumbers(int arr[], int& arrLength) {
    bool addMore = true;
    while (addMore) {
        addArrayElement(readNumber("\nPlease enter a number: "), arr, arrLength);

        cout << "\nDo you want to add more numbers? [0]: No, [1]: Yes? ";
        cin >> addMore;
    }
}

// Function to print the elements of the array
void printArray(const int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[100];           // Array to store user input
    int arrLength = 0;      // Initialize array length to 0

    // Input numbers into the array
    inputUserNumbers(arr, arrLength);

    // Display the array length and its elements
    cout << "\nArray Length: " << arrLength << endl;
    cout << "Array Elements: ";
    printArray(arr, arrLength);

    return 0;
}
