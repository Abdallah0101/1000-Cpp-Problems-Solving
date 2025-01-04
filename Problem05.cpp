/*
 * Hiring Eligibility Program
 * This program checks if a user meets the hiring criteria based on their age and possession of a driver's license.
 */

#include <iostream>

using namespace std;

// Struct to store user information
struct UserInfo {
    int age;               // User's age
    bool hasDrivingLicense; // Whether the user has a driver's license
};

// Function to read user information
UserInfo readUserInfo() {
    UserInfo userInfo;

    cout << "Please enter your age: ";
    cin >> userInfo.age;

    cout << "Do you have a driver's license? (1 for Yes, 0 for No): ";
    cin >> userInfo.hasDrivingLicense;

    return userInfo;
}

// Function to check if the user meets the hiring criteria
bool isEligible(const UserInfo& userInfo) {
    // Pass by const reference to avoid copying the struct, improving performance and ensuring the original data isn't modified
    return (userInfo.age > 21 && userInfo.hasDrivingLicense); // Returns true if both conditions are met
}

// New Function: Calculate how many years the user has been eligible
int yearsEligible(const UserInfo& userInfo) {
    if (userInfo.age > 21) {
        return userInfo.age - 21; // Calculate how many years they have been above the eligible age
    }
    return 0; // Not eligible yet
}

// Function to print the result based on eligibility
void printResult(const UserInfo& userInfo) {
    if (isEligible(userInfo)) {
        cout << "\nHired\n";
        cout << "You have been eligible for " << yearsEligible(userInfo) << " years.\n";
    } else {
        cout << "\nRejected\n";
        if (userInfo.age <= 21) {
            cout << "Reason: Age below 21. You need " << (21 - userInfo.age) << " more years to be eligible.\n";
        } else {
            cout << "Reason: You do not have a driver's license.\n";
        }
    }
}

int main() {
    printResult(readUserInfo());             // Print hiring result
    return 0;
}
