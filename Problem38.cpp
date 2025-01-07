/*
 * Check if number is a prime or not.
 */


#include <iostream>
using namespace std;

// Enum to represent Prime or NotPrime
enum class PrimeStatus { NotPrime, Prime };

// Function to check if a number is prime
PrimeStatus checkPrimeStatus(int number) {
    if (number <= 1) {
        return PrimeStatus::NotPrime; // Explicitly refers to NotPrime in PrimeStatus
    }
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return PrimeStatus::NotPrime; // Explicitly refers to NotPrime in PrimeStatus
        }
    }
    return PrimeStatus::Prime; // Explicitly refers to Prime in PrimeStatus
}

// Function to print the result
void printResult(int number, PrimeStatus status) {
    if (status == PrimeStatus::Prime) { // Explicitly refers to Prime in PrimeStatus
        cout << number << " is Prime" << endl;
    } else {
        cout << number << " is Not Prime" << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    // Get prime status and print result
    PrimeStatus status = checkPrimeStatus(number);
    printResult(number, status);

    return 0;
}
