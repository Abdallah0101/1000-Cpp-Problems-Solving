/*
 * Currency Conversion Program
 * This program asks the user to enter the number of pennies, nickels, dimes, quarters, and dollars.
 * It calculates the total value in pennies and dollars and prints the result.
 */

#include <iostream>
using namespace std;

// Define a struct to store the count of each currency
struct Currency {
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int dollars;
};

// Function to read input values from the user
Currency readCurrency() {
    Currency currency;
    cout << "Enter the number of pennies: ";
    cin >> currency.pennies;
    cout << "Enter the number of nickels: ";
    cin >> currency.nickels;
    cout << "Enter the number of dimes: ";
    cin >> currency.dimes;
    cout << "Enter the number of quarters: ";
    cin >> currency.quarters;
    cout << "Enter the number of dollars: ";
    cin >> currency.dollars;
    return currency;
}

// Function to calculate the total value in pennies
int calculateTotalPennies(const Currency& currency) {
    return currency.pennies +
           (currency.nickels * 5) +
           (currency.dimes * 10) +
           (currency.quarters * 25) +
           (currency.dollars * 100);
}

// Function to calculate the total value in dollars
double calculateTotalDollars(int totalPennies) {
    return totalPennies / 100.0; // Convert pennies to dollars
}

// Function to print the results
void printResults(int totalPennies, double totalDollars) {
    cout << totalPennies << " Pennies" << endl;
    cout << totalDollars << " Dollars" << endl;
}

int main() {
    // Read the currency counts
    Currency currency = readCurrency();

    // Calculate the total values
    int totalPennies = calculateTotalPennies(currency);
    double totalDollars = calculateTotalDollars(totalPennies);

    // Print the results
    printResults(totalPennies, totalDollars);

    return 0;
}
