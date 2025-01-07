/*
 * Program to Read and Display User Information
 * This program reads the user's first and last name, concatenates them into a full name, and then displays them.
 */

#include <iostream>
#include <string>

using namespace std;

// Struct to store user information.
struct Info {
    string firstName; // User's first name
    string lastName;  // User's last name
};

// Function to read user information
Info readInfo() {
    Info info;

    cout << "Type your first name: ";
    cin >> info.firstName;

    cout << "Type your last name: ";
    cin >> info.lastName;

    return info;
}

// Function to get the full name of the user
string getFullName(const Info& info) {
    // Concatenates first name and last name with a space in between
    return info.firstName + " " + info.lastName;
}

// Function to print user information
void printInfo(const Info& info) {
    // Prints the full name of the user
    cout << "Your full name is: " << getFullName(info) << endl;
}

int main() {
    printInfo(readInfo());       // Print the user's full name
    return 0;
}
