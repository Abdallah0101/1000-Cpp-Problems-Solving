/*
 * Printing a Name on the Screen
 * This program prints a predefined name to the screen using a function.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to print the name
void printName(const string& name) { // Passing by const reference to avoid unnecessary copying
    cout << "\nYour Name is: " << name << endl;
} 

int main() {
    printName("Abdalla");  // Call the function with the name
    return 0;
}
