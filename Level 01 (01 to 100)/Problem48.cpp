/* 
 * Calculate monthly installment based on loan amount and months 
 */

#include <iostream>
#include <string>
using namespace std;

// Function to read a floating-point value with a custom message
float readFloatValue(const string& message) {
    float value;
    cout << message;
    cin >> value;
    return value;
}

// Function to calculate the monthly installment
float calculateMonthlyInstallment(float loanAmount, int months) {
    return loanAmount / months;
}

// Function to print the monthly installment amount
void printMonthlyInstallment(float installment) {
    cout << "The monthly installment amount is: " << installment << endl;
}

int main() {
    // Read input values
    float loanAmount = readFloatValue("Enter the loan amount: ");
    int months = static_cast<int>(readFloatValue("Enter the number of months to settle the loan: "));

    // Calculate and print the monthly installment
    float monthlyInstallment = calculateMonthlyInstallment(loanAmount, months);
    printMonthlyInstallment(monthlyInstallment);

    return 0;
}
