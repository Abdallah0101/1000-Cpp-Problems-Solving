/*
 * ATM PIN Verification
 * Allow the user to enter their PIN up to 3 times.
 * If the PIN is correct, display the account balance and exit.
 * If the PIN is incorrect, display an error message and decrement attempts.
 * After 3 failed attempts, deny access.
 * Assume the account balance is $7500.
 */
#include <iostream>
#include <string>

using namespace std;

// Function to set the console screen color
void setScreenColor(const string& color) {
#ifdef _WIN32
    system(("color " + color).c_str());
#endif
}

// Function to read the PIN from the user
string readPin(const string& message) {
    string pin;
    cout << message;
    cin >> pin;
    return pin;
}

// Function to check if the entered PIN is valid
bool isPinValid(const string& pin) {
    const string correctPin = "1234";
    return pin == correctPin;
}

// Function to display the account balance
void showBalance(float balance) {
    setScreenColor("2F"); // Set screen to green
    cout << "\nYour account balance is: $" << balance << "\n" << endl;
}

// Function to handle invalid PIN input
void handleInvalidPin() {
    setScreenColor("4F"); // Set screen to red
    cout << "Wrong PIN" << endl;
}

int main() {
    const float userBalance = 7500.0f;
    const int maxAttempts = 3; // Maximum number of attempts allowed
    int attempts = 0;
    string pin;

    while (attempts < maxAttempts) {
        pin = readPin("Enter your ATM PIN: ");
        if (isPinValid(pin)) {
            showBalance(userBalance);
            return 0; // Exit the program after successful login
        } else {
            handleInvalidPin();
            attempts++;
            cout << "Attempts remaining: " << maxAttempts - attempts << endl;
        }
    }

    // If the user fails to enter the correct PIN within 3 attempts
    cout << "\nYou have exceeded the maximum number of attempts. Access denied." << endl;
    return 0;
}
