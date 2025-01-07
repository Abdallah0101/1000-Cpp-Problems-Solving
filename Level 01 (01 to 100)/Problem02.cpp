/*
 * Input and Display: Printing a User's Full Name
 * This program reads a user's full name from input and displays it on the screen.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to read a name from user input
string readName() {
    string name;
    cout << "Please enter your name: ";
    getline(cin, name); // Using getline to allow input with spaces
    return name;
}

// Function to print the given name
void printName(const string& name) { // Passing by const reference to avoid unnecessary copying
    cout << "\nYour Name is: " << name << endl;
}

int main() {
    printName(readName()); // Reads and prints the user's name
    return 0;
}
