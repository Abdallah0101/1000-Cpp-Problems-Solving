/*
 * Copy Prime Numbers to a New Array
 * This program generates an array of random numbers, identifies prime numbers, and copies them into a new array.
 */

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

// Enum to define prime number status
enum class PrimeStatus { Prime, NotPrime };

// Function to check if a number is prime
PrimeStatus checkPrimeStatus(int number) {
    if (number <= 1) {
        return PrimeStatus::NotPrime;
    }
    int limit = static_cast<int>(sqrt(number));
    for (int i = 2; i <= limit; i++) {
        if (number % i == 0) {
            return PrimeStatus::NotPrime;
        }
    }
    return PrimeStatus::Prime;
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

// Function to add an element to an array
void addElementToArray(int number, int arr[], int& length) {
    arr[length] = number;
    length++;
}

// Function to copy prime numbers from the source array to the destination array
void copyPrimeNumbers(const int source[], int destination[], int sourceLength, int& destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
        if (checkPrimeStatus(source[i]) == PrimeStatus::Prime) {
            addElementToArray(source[i], destination, destinationLength);
        }
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int sourceArray[100], sourceLength = 0;
    int primeArray[100], primeLength = 0;

    // Fill the source array with random numbers
    fillArrayWithRandomNumbers(sourceArray, sourceLength);

    // Copy prime numbers to the new array
    copyPrimeNumbers(sourceArray, primeArray, sourceLength, primeLength);

    // Display the arrays
    cout << "\nSource Array Elements:\n";
    printArray(sourceArray, sourceLength);

    cout << "\nPrime Numbers in New Array:\n";
    printArray(primeArray, primeLength);

    return 0;
}
