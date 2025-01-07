/*
 * Month Printer Program
 * This program reads a month number from the user and prints the corresponding month name.
 * If the number is invalid, it asks the user to enter the month again.
 */

#include <iostream>
#include <string>

using namespace std;

// Enum for months of the year
enum class Month {
    January = 1, February, March, April, May, June, 
    July, August, September, October, November, December
};

// Function to read a valid month number from the user
Month readMonth() {
    int monthNumber;
    while (true) {
        cout << "Enter a month number (1-12): ";
        cin >> monthNumber;

        if (monthNumber >= static_cast<int>(Month::January) && monthNumber <= static_cast<int>(Month::December)) {
            return static_cast<Month>(monthNumber);
        } else {
            cout << "Wrong Month! Please enter a valid month (1-12).\n";
        }
    }
}

// Function to get the name of the month
string getMonthName(Month month) {
    switch (month) {
        case Month::January: return "January";
        case Month::February: return "February";
        case Month::March: return "March";
        case Month::April: return "April";
        case Month::May: return "May";
        case Month::June: return "June";
        case Month::July: return "July";
        case Month::August: return "August";
        case Month::September: return "September";
        case Month::October: return "October";
        case Month::November: return "November";
        case Month::December: return "December";
        default: return "Invalid Month";
    }
}

// Function to print the name of the month
void printMonth(Month month) {
    cout << "The month is: " << getMonthName(month) << endl;
}

int main() {
    // Read a valid month from the user
    Month month = readMonth();

    // Print the corresponding month name
    printMonth(month);

    return 0;
}
