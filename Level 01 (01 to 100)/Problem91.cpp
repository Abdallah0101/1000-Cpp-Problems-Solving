/*
 * Check if an Array is Palindrome
 * This program checks whether a given array is a palindrome.
 * A palindrome array reads the same forward and backward.
 */

#include <iostream>
using namespace std;

// Function to fill the array with predefined values
void fillArrayWithValues(int arr[], int& length) {
    length = 6; // Array size
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

// Function to print the elements of an array
void printArray(const int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to check if an array is a palindrome
bool isPalindromeArray(const int arr[], int length) {
    for (int i = 0; i < length / 2; i++) { // Compare elements symmetrically
        if (arr[i] != arr[length - i - 1]) {
            return false; // Array is not a palindrome
        }
    }
    return true; // Array is a palindrome
}

int main() {
    int arr[100], length = 0;

    // Fill the array with predefined values
    fillArrayWithValues(arr, length);

    // Print the array elements
    cout << "\nArray Elements:\n";
    printArray(arr, length);

    // Check and display if the array is a palindrome
    if (isPalindromeArray(arr, length)) {
        cout << "\nYes, the array is a palindrome.\n";
    } else {
        cout << "\nNo, the array is NOT a palindrome.\n";
    }

    return 0;
}
