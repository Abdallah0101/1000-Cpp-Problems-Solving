/*
 * Validate ATM PIN, Show Account Balance, and Change Screen Color on Success
 * This program reads an ATM PIN from the user, validates it, and shows the account balance if the PIN is correct.
 * If the PIN is incorrect, it asks the user to re-enter the PIN. On successful login, the screen color changes to green.
 */

#include <iostream>
#include <string>

using namespace std;

// Constants
const string CORRECT_PIN = "1234";
const float USER_BALANCE = 7500.0f;

// Function to set the screen color (platform-specific)
void setScreenColor(const string& color) {
#ifdef _WIN32
    system(("color " + color).c_str()); // Windows-specific
#endif

// #ifdef _WIN32: Checks if the code is being compiled on a Windows system.
// This allows platform-specific code to be included or excluded as needed.
}

// Function to read PIN input from the user
string readInput(const string& prompt) {
    string input;
    cout << prompt;
    cin >> input;
    return input;
}

// Function to validate the PIN
bool isPinValid(const string& pin) {
    return pin == CORRECT_PIN;
}

// Function to display the user's account balance
void displayBalance(float balance) {
    setScreenColor("2F"); // Green screen
    cout << "\nYour account balance is: $" << balance << "\n" << endl;
}

// Function to handle invalid PIN attempts
void handleInvalidPin() {
    setScreenColor("4F"); // Red screen
    cout << "Invalid PIN. Please try again.\n" << endl;
}

// Main function
int main() {
    string pin;

    while (true) {
        // Read the PIN
        pin = readInput("Enter your ATM PIN: ");

        // Validate the PIN
        if (isPinValid(pin)) {
            displayBalance(USER_BALANCE);
            break;
        }
        else {
            handleInvalidPin();
        }
    }

    return 0;
}

