/*
 * Random Number Generator
 * This program generates random numbers within a specified range using a simple function.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random number within a specified range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from; // Generate a random number between 'from' and 'to'
}

int main() {
    // Seed the random number generator once to ensure unique results
    srand(static_cast<unsigned>(time(nullptr)));

    // Generate and print random numbers in the range 1 to 10
    cout << generateRandomNumber(1, 10) << endl;
    cout << generateRandomNumber(1, 10) << endl;
    cout << generateRandomNumber(1, 10) << endl;
    cout << generateRandomNumber(1, 10) << endl;

    return 0;
}
