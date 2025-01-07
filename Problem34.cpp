/*
 * Commission Calculation Program
 * This program calculates the commission based on the total sales entered by the user.
 */

#include <iostream>
using namespace std;

// Function to read the total sales from the user
double readTotalSales() {
    double totalSales;
    cout << "Please enter the total sales amount: ";
    cin >> totalSales;
    return totalSales;
}

// Function to determine the commission percentage
double determineCommissionPercentage(double totalSales) {
    if (totalSales > 1000000) {
        return 0.01; // 1%
    } else if (totalSales > 500000) {
        return 0.02; // 2%
    } else if (totalSales > 100000) {
        return 0.03; // 3%
    } else if (totalSales > 50000) {
        return 0.05; // 5%
    } else {
        return 0.0; // 0%
    }
}

// Function to calculate the commission
double calculateCommission(double totalSales, double commissionPercentage) {
    return totalSales * commissionPercentage;
}

// Function to print the commission
void printCommission(double commission) {
    cout << "The commission is: " << commission << endl;
}

int main() {
    // Read total sales
    double totalSales = readTotalSales();

    // Determine the commission percentage
    double commissionPercentage = determineCommissionPercentage(totalSales);

    // Calculate the commission
    double commission = calculateCommission(totalSales, commissionPercentage);

    // Print the commission
    printCommission(commission);

    return 0;
}
