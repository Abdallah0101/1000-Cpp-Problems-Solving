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
    return (userInfo.age > 21 && userInfo.hasDrivingLicense); // Returns true if both conditions are met
}

// Function to print the result based on eligibility
void printResult(const UserInfo& userInfo) {
    if (isEligible(userInfo)) {
        cout << "\nHired\n";
    } else {
        cout << "\nRejected\n";
    }
}

int main() {
    printResult(readUserInfo());             // Print hiring result
    return 0;
}
