/*
 * Convert Seconds to Days, Hours, Minutes, and Seconds
 * This program converts a given number of seconds into days, hours, minutes, and seconds.
 */

#include <iostream>
using namespace std;

// Struct to store the breakdown of time
struct TimeDuration {
    int days;
    int hours;
    int minutes;
    int seconds;
};

// Function to read the number of seconds from the user
int readNumberOfSeconds() {
    int seconds;
    cout << "Enter the total number of seconds: ";
    cin >> seconds;
    return seconds;
}

// Function to convert seconds into days, hours, minutes, and seconds
TimeDuration convertSecondsToTimeDuration(int totalSeconds) {
    // Constants for clarity
    const int SECONDS_IN_A_DAY = 86400;
    const int SECONDS_IN_AN_HOUR = 3600;
    const int SECONDS_IN_A_MINUTE = 60;

    TimeDuration duration;

    duration.days = totalSeconds / SECONDS_IN_A_DAY;  // Calculate days
    totalSeconds %= SECONDS_IN_A_DAY;                // Remaining seconds

    duration.hours = totalSeconds / SECONDS_IN_AN_HOUR;  // Calculate hours
    totalSeconds %= SECONDS_IN_AN_HOUR;                  // Remaining seconds

    duration.minutes = totalSeconds / SECONDS_IN_A_MINUTE;  // Calculate minutes
    duration.seconds = totalSeconds % SECONDS_IN_A_MINUTE;  // Remaining seconds

    return duration;
}

// Function to print the time duration in the format "D:H:M:S"
void printTimeDuration(const TimeDuration& duration) {
    cout << duration.days << " Days, "
         << duration.hours << " Hours, "
         << duration.minutes << " Minutes, "
         << duration.seconds << " Seconds" << endl;
}

int main() {
    // Read the total number of seconds
    int totalSeconds = readNumberOfSeconds();

    // Convert seconds to days, hours, minutes, and seconds
    TimeDuration duration = convertSecondsToTimeDuration(totalSeconds);

    // Print the time duration
    printTimeDuration(duration);

    return 0;
}
