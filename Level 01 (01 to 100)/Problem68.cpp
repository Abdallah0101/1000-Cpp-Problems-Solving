/*
 * Text Encryption and Decryption
 * This program encrypts and decrypts text using a simple substitution method
 * based on an encryption key.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to read input text from the user
string readText() {
    string text;
    cout << "Please enter the text:\n";
    getline(cin, text);
    return text;
}

// Function to encrypt text using a given encryption key
string encryptText(string text, short encryptionKey) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char(int(text[i]) + encryptionKey); // Modify each character
    }
    return text;
}

// Function to decrypt text using a given encryption key
string decryptText(string text, short encryptionKey) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char(int(text[i]) - encryptionKey); // Reverse the modification
    }
    return text;
}

int main() {
    const short encryptionKey = 2; // Key used for encryption and decryption

    string textAfterEncryption, textAfterDecryption;
    string text = readText();

    // Perform encryption and decryption
    textAfterEncryption = encryptText(text, encryptionKey);
    textAfterDecryption = decryptText(textAfterEncryption, encryptionKey);

    // Display results
    cout << "\nText Before Encryption: " << text << endl;
    cout << "Text After Encryption: " << textAfterEncryption << endl;
    cout << "Text After Decryption: " << textAfterDecryption << endl;

    return 0;
}
