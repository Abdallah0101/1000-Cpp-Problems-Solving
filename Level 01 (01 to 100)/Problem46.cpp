/*
 * Print Letters from A to Z
 * This program prints all uppercase letters from A to Z.
 */

#include <iostream>

using namespace std;

// Function to print uppercase letters from A to Z
void printUppercaseLettersAtoZ() {
    for (char letter = 'A'; letter <= 'Z'; letter++) {
        cout << letter << endl;
    }
}

int main() {
    printUppercaseLettersAtoZ(); // Call the function
    return 0;
}
