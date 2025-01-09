/*
 * Random Key Generator
 * This program generates a specified number of random keys in the format XXXX-XXXX-XXXX-XXXX.
 * Each segment contains 4 capital letters. The program includes:
 * - A function to generate random characters of different types.
 * - A function to generate random words of a specified length.
 * - A function to generate keys with the required format.
 * - The ability to create multiple keys based on user input.
 */

#include <iostream>
#include <string>
#include <ctime> // For seeding the random number generator
using namespace std;

// Enum to define character types
enum class CharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

// Function to generate a random number within a given range
int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to get a random character based on the specified type
char getRandomCharacter(CharType charType) {
    switch (charType) {
        case CharType::SmallLetter:
            return char(randomNumber(97, 122)); // a-z
        case CharType::CapitalLetter:
            return char(randomNumber(65, 90)); // A-Z
        case CharType::SpecialCharacter:
            return char(randomNumber(33, 47)); // Special characters
        case CharType::Digit:
            return char(randomNumber(48, 57)); // 0-9
        default:
            return ' '; // Default to space if invalid type
    }
}

// Function to read a positive number from the user
int readPositiveNumber(const string& message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Function to generate a random word of a specified length and character type
string generateWord(CharType charType, short length) {
    string word;
    for (int i = 0; i < length; i++) {
        word += getRandomCharacter(charType);
    }
    return word;
}

// Function to generate a single random key in the format XXXX-XXXX-XXXX-XXXX
string generateKey() {
    string key;
    key += generateWord(CharType::CapitalLetter, 4) + "-";
    key += generateWord(CharType::CapitalLetter, 4) + "-";
    key += generateWord(CharType::CapitalLetter, 4) + "-";
    key += generateWord(CharType::CapitalLetter, 4);
    return key;
}

// Function to generate and display multiple keys
void generateKeys(short numberOfKeys) {
    for (int i = 1; i <= numberOfKeys; i++) {
        cout << "Key [" << i << "]: " << generateKey() << endl;
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Read the number of keys to generate and display them
    generateKeys(readPositiveNumber("Please enter how many keys to generate: "));
    return 0;
}
