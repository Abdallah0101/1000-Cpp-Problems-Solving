/*
 * Generate and Display Random Keys
 * This program generates a specified number of random keys, each consisting of four parts separated by dashes.
 * Each part contains four random capital letters. The keys are stored in an array and displayed.
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Enum to define character types
enum class CharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

// Function to generate a random number within a given range
int generateRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to generate a random character based on the character type
char getRandomCharacter(CharType charType) {
    switch (charType) {
        case CharType::SmallLetter:
            return static_cast<char>(generateRandomNumber(97, 122));
        case CharType::CapitalLetter:
            return static_cast<char>(generateRandomNumber(65, 90));
        case CharType::SpecialCharacter:
            return static_cast<char>(generateRandomNumber(33, 47));
        case CharType::Digit:
            return static_cast<char>(generateRandomNumber(48, 57));
    }
    return '\0'; // Default return for safety
}

// Function to generate a random word of a specified length and character type
string generateWord(CharType charType, int length) {
    string word;
    for (int i = 0; i < length; i++) {
        word += getRandomCharacter(charType);
    }
    return word;
}

// Function to generate a random key in the format XXXX-XXXX-XXXX-XXXX
string generateKey() {
    string key = generateWord(CharType::CapitalLetter, 4) + "-";
    key += generateWord(CharType::CapitalLetter, 4) + "-";
    key += generateWord(CharType::CapitalLetter, 4) + "-";
    key += generateWord(CharType::CapitalLetter, 4);
    return key;
}

// Function to fill an array with generated keys
void fillArrayWithKeys(string arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = generateKey();
    }
}

// Function to print the contents of a string array
void printStringArray(const string arr[], int length) {
    cout << "\nGenerated Keys:\n\n";
    for (int i = 0; i < length; i++) {
        cout << "Key[" << i + 1 << "]: " << arr[i] << "\n";
    }
    cout << endl;
}

// Function to read a positive number from the user
int readPositiveNumber(const string& message) {
    int number;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    string keys[100];
    int numberOfKeys = readPositiveNumber("How many keys do you want to generate? ");

    // Generate and display the keys
    fillArrayWithKeys(keys, numberOfKeys);
    printStringArray(keys, numberOfKeys);

    return 0;
}
