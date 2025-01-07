/*
 * Calculate Remainder to be Paid Back
 * This program reads the TotalBill and CashPaid amounts, and calculates the remainder to be paid back.
 */

#include <iostream>
using namespace std;

// Function to read the TotalBill and CashPaid
void readBillAndCash(float &totalBill, float &cashPaid) {
    cout << "Enter Total Bill amount: ";
    cin >> totalBill;

    cout << "Enter Cash Paid amount: ";
    cin >> cashPaid;
}

// Function to calculate the remainder to be paid back
float calculateRemainder(float totalBill, float cashPaid) {
    return cashPaid - totalBill; // Calculate the remainder
}

// Function to print the remainder
void printRemainder(float remainder) {
    cout << "The remainder to be paid back is: " << remainder << endl;
}

int main() {
    float totalBill, cashPaid;

    // Read inputs
    readBillAndCash(totalBill, cashPaid);

    // Calculate the remainder and print the result
    float remainder = calculateRemainder(totalBill, cashPaid);
    printRemainder(remainder);

    return 0;
}
