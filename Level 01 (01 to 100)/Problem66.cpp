/*
 * Generate Words from AAA to ZZZ
 * This program generates and prints all possible three-letter words using uppercase English letters (from 'A' to 'Z').
 */

#include <iostream>
#include <string>

using namespace std;

// Function to generate and print all three-letter words from 'AAA' to 'ZZZ'
void printWordsFromAAAtoZZZ() {
    cout << "\n";

    string word = ""; // Variable to store each generated word

    // Loop through each letter for the first position
    for (int i = 65; i <= 90; i++) {
        // Loop through each letter for the second position
        for (int j = 65; j <= 90; j++) {
            // Loop through each letter for the third position
            for (int k = 65; k <= 90; k++) {
                // Construct the word
                word += char(i);
                word += char(j);
                word += char(k);

                // Print the generated word
                cout << word << endl;

                // Reset the word for the next iteration
                word = "";
            }
        }
    }

    cout << "\n------------------------------------------\n";
}

int main() {
    // Call the function to generate and print words
    printWordsFromAAAtoZZZ();

    return 0;
}
