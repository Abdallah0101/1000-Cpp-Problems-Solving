/*
 * Filter Prime Numbers from an Array
 * This program generates an array filled with random numbers between 1 and 100.
 * It creates a second array containing only the prime numbers from the original array.
 */

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

// Enum to represent Prime and Not Prime
enum class PrimeStatus { Prime = 1, NotPrime = 2 };

// Function to check if a number is prime
PrimeStatus checkPrime(int number) {
    if (number <= 1) {
        return PrimeStatus::NotPrime;
    }
    int half = number / 2;
    for (int counter = 2; counter <= half; counter++) {
        if (number % counter == 0) {
            return PrimeStatus::NotPrime;
        }
    }
    return PrimeStatus::Prime;
}

// Function to generate a random number within a specified range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to fill an array with random numbers
void fillArrayWithRandomNumbers(int source[], int& length) {
    cout << "\nEnter the number of elements: ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        source[i] = generateRandomNumber(1, 100);
    }
}

// Function to copy only prime numbers from one array to another
void copyPrimeNumbers(const int source[], int destination[], int sourceLength, int& destinationLength) {
    int counter = 0;
    for (int i = 0; i < sourceLength; i++) {
        if (checkPrime(source[i]) == PrimeStatus::Prime) {
            destination[counter] = source[i];
            counter++;
        }
    }
    destinationLength = counter;
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

    int originalArray[100], originalLength;
    int primeArray[100], primeLength = 0;

    // Fill the original array with random numbers
    fillArrayWithRandomNumbers(originalArray, originalLength);

    // Copy only prime numbers to the second array
    copyPrimeNumbers(originalArray, primeArray, originalLength, primeLength);

    // Print the arrays
    cout << "\nOriginal Array Elements:\n";
    printArray(originalArray, originalLength);

    cout << "\nPrime Numbers in the Second Array:\n";
    printArray(primeArray, primeLength);

    return 0;
}
