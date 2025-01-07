/*
 * Convert Hours to Weeks and Days
 * This program reads a total number of hours, calculates the equivalent in weeks and days, and prints the results.
 */

#include <iostream>
#include <iomanip> // For precision in floating-point numbers
using namespace std;

// Constants
const float HOURS_PER_DAY = 24.0f;
const float HOURS_PER_WEEK = 168.0f; // 7 * 24

// Function to read the total hours
float getInputHours() {
    float hours;
    cout << "Enter the total hours: ";
    cin >> hours;
    return hours;
}

// Function to convert hours to weeks
float convertHoursToWeeks(float hours) {
    return hours / HOURS_PER_WEEK;
}

// Function to convert hours to days
float convertHoursToDays(float hours) {
    return hours / HOURS_PER_DAY;
}

// Function to display the results
void displayConversionResults(float weeks, float days) {
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "Converted Time:" << endl;
    cout << weeks << " Weeks" << endl;
    cout << days << " Days" << endl;
}

int main() {
    // Read the total hours
    float totalHours = getInputHours();

    // Perform conversions
    float weeks = convertHoursToWeeks(totalHours);
    float days = convertHoursToDays(totalHours);

    // Display the results
    displayConversionResults(weeks, days);

    return 0;
}

