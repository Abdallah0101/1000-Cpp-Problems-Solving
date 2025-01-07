/*
 * Brute Force Password Guessing
 * This program allows the user to set a 3-letter uppercase password.
 * It then uses brute force to guess the password by generating all combinations from AAA to ZZZ.
 * Displays the number of attempts taken to find the password.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to read a 3-letter password from the user
string readPassword() {
    string password;
    cout << "Please enter a 3-letter password (all capital letters): ";
    cin >> password;
    return password;
}

// Function to guess the given password using brute force
bool guessPassword(const string& originalPassword) {
    string currentGuess = "";
    int attempts = 0;

    cout << "\nAttempting to guess the password...\n\n";

    for (int i = 65; i <= 90; i++) {         // Loop for the first letter
        for (int j = 65; j <= 90; j++) {     // Loop for the second letter
            for (int k = 65; k <= 90; k++) { // Loop for the third letter
                // Construct the current guess
                currentGuess = char(i);
                currentGuess += char(j);
                currentGuess += char(k);

                attempts++; // Increment the attempt counter

                // Display the current attempt
                cout << "Attempt [" << attempts << "]: " << currentGuess << endl;

                // Check if the guess matches the original password
                if (currentGuess == originalPassword) {
                    cout << "\nPassword found: " << currentGuess << endl;
                    cout << "Password guessed after " << attempts << " attempt(s).\n";
                    return true;
                }
            }
        }
    }

    return false; // Return false if the password was not found (unlikely in this context)
}

int main() {
    // Read the password from the user
    string password = readPassword();

    // Attempt to guess the password
    if (!guessPassword(password)) {
        cout << "Failed to guess the password.\n";
    }

    return 0;
}
