/*
 * Calculate Total Bill with Service Fee and Sales Tax
 * Reads the bill value, applies a 10% service fee and a 16% sales tax on the result, and calculates the total bill.
 */

#include <iostream>
using namespace std;

// Constants for service fee and sales tax percentages
const float SERVICE_FEE_MULTIPLIER = 1.1f; // Adds 10%
const float SALES_TAX_MULTIPLIER = 1.16f;  // Adds 16%

// Function to read the bill value
float readBillValue() {
    float billValue;
    cout << "Enter the bill value: ";
    cin >> billValue;
    return billValue;
}

// Function to calculate the total bill
float calculateTotalBill(float totalBill) {
    totalBill *= SERVICE_FEE_MULTIPLIER;  // Add 10% service fee
    totalBill *= SALES_TAX_MULTIPLIER;    // Add 16% sales tax on subtotal
    return totalBill;                     // Return the final total
}

// Function to print the total bill
void printTotalBill(float totalBill) {
    cout << "The total bill including service fee and sales tax is: " << totalBill << endl;
}

int main() {
    // Read the bill value
    float billValue = readBillValue();

    // Calculate the total bill
    float totalBill = calculateTotalBill(billValue);

    // Print the total bill
    printTotalBill(totalBill);

    return 0;
}
