/*
 * Task Duration in Seconds
 * This program calculates the total task duration in seconds from the given days, hours, minutes, and seconds.
 */

#include <iostream>
using namespace std;

// Constants
const int SECONDS_IN_A_MINUTE = 60;
const int SECONDS_IN_AN_HOUR = 3600; // 60 * 60
const int SECONDS_IN_A_DAY = 86400;  // 24 * 60 * 60

// Struct to represent task duration
struct TaskDuration {
    int days;
    int hours;
    int minutes;
    int seconds;
};

// Function to read task duration input
TaskDuration readTaskDuration() {
    TaskDuration duration;
    cout << "Enter the number of days: ";
    cin >> duration.days;

    cout << "Enter the number of hours: ";
    cin >> duration.hours;

    cout << "Enter the number of minutes: ";
    cin >> duration.minutes;

    cout << "Enter the number of seconds: ";
    cin >> duration.seconds;

    return duration;
}

// Function to calculate total seconds from task duration
int calculateTotalSeconds(const TaskDuration& duration) {
    return (duration.days * SECONDS_IN_A_DAY) +
           (duration.hours * SECONDS_IN_AN_HOUR) +
           (duration.minutes * SECONDS_IN_A_MINUTE) +
           duration.seconds;
}

// Function to print the total seconds
void printTotalSeconds(int totalSeconds) {
    cout << "Total task duration is: " << totalSeconds << " Seconds" << endl;
}

int main() {
    // Read the task duration
    TaskDuration duration = readTaskDuration();

    // Calculate the total seconds
    int totalSeconds = calculateTotalSeconds(duration);

    // Print the total seconds
    printTotalSeconds(totalSeconds);

    return 0;
}
