/*
 * Calculate Months to Settle a Loan
 * This program reads the loan amount and monthly payment, then calculates and prints the number of months needed to settle the loan.
 */

#include <iostream>

using namespace std;

// Function to read a floating-point value with a custom message
float readFloatValue(const string& message) {
    float value;
    cout << message; // Display the custom message
    cin >> value;
    return value; // Return the entered value
}


// Function to calculate the number of months to settle the loan
int calculateMonthsToSettleLoan(float loanAmount, float monthlyPayment) {
    return static_cast<int>(ceil(loanAmount / monthlyPayment)); // Ceiling to ensure no partial months
}

// Function to print the result
void printMonthsToSettleLoan(int months) {
    cout << "It will take " << months << " months to settle the loan." << endl;
}

int main() {
    float loanAmount = readFloatValue("Enter the loan amount: ");
    float monthlyPayment = readFloatValue("Enter the monthly payment: ");
    
    int months = calculateMonthsToSettleLoan(loanAmount, monthlyPayment);
    printMonthsToSettleLoan(months);
    
    return 0;
}
