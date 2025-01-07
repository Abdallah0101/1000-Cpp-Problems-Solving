/*
 * Day Printer Program
 * This program reads a day number from the user and prints the corresponding day of the week.
 * If the number is invalid, it asks the user to enter the day again.
 */

#include <iostream>
using namespace std;

// Enum for days of the week
enum class DayOfWeek {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

// Function to read a valid day number from the user
DayOfWeek readDay() {
    int day;
    while (true) {
        cout << "Enter a day number (1-7): ";
        cin >> day;

        if (day >= static_cast<int>(DayOfWeek::Sunday) && day <= static_cast<int>(DayOfWeek::Saturday)) {
            return static_cast<DayOfWeek>(day);
        } else {
            cout << "Wrong Day! Please enter a valid day (1-7).\n";
        }
    }
}

// Function to get the name of the day
string getDayName(DayOfWeek day) {
    switch (day) {
        case DayOfWeek::Sunday: return "Sunday";
        case DayOfWeek::Monday: return "Monday";
        case DayOfWeek::Tuesday: return "Tuesday";
        case DayOfWeek::Wednesday: return "Wednesday";
        case DayOfWeek::Thursday: return "Thursday";
        case DayOfWeek::Friday: return "Friday";
        case DayOfWeek::Saturday: return "Saturday";
        default: return "Invalid Day";
    }
}

// Function to print the day name
void printDay(DayOfWeek day) {
    cout << "It's " << getDayName(day) << endl;
}

int main() {
    // Read a valid day from the user
    DayOfWeek day = readDay();

    // Print the corresponding day name
    printDay(day);

    return 0;
}
