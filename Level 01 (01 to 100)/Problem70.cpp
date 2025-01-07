/*
 * Generate Random Characters
 * This program generates random characters of different types:
 * small letters, capital letters, special characters, and digits.
 * It uses an enumeration for character type and random number generation for character selection.
 */

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Function to generate a random number within a specified range
int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Enumeration for character types
enum class charType { SmallLetter = 1, CapitalLetter, SpecialCharacter, Digit };

// Function to get a random character based on the character type
char getRandomCharacter(charType type) {
    switch (type) {
        case charType::SmallLetter:
            return char(randomNumber(97, 122)); // a-z
        case charType::CapitalLetter:
            return char(randomNumber(65, 90));  // A-Z
        case charType::SpecialCharacter:
            return char(randomNumber(33, 47)); // Special characters
        case charType::Digit:
            return char(randomNumber(48, 57)); // 0-9
        default:
            return '\0';
    }
}

int main() {
    // Seed the random number generator
    srand((unsigned)time(NULL));

    // Generate and display random characters of each type
    cout << getRandomCharacter(charType::SmallLetter) << endl;
    cout << getRandomCharacter(charType::CapitalLetter) << endl;
    cout << getRandomCharacter(charType::SpecialCharacter) << endl;
    cout << getRandomCharacter(charType::Digit) << endl;

    return 0;
}
