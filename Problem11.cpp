/*
 * Program to Calculate the Sum, Average, and Passing Status of Three Marks
 * This program reads three marks from the user, calculates their sum and average, 
 * and displays whether the student has passed or failed.
 */

#include <iostream>

using namespace std;

// Function to read three marks from the user
void readMarks(int& mark1, int& mark2, int& mark3) {
    cout << "Enter the first mark: ";
    cin >> mark1;

    cout << "Enter the second mark: ";
    cin >> mark2;

    cout << "Enter the third mark: ";
    cin >> mark3;
}

// Function to calculate the sum of three marks
int calculateSum(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3;
}

// Function to calculate the average of three marks
float calculateAverage(int total) {
    return static_cast<float>(total) / 3; // Ensures floating-point division
}

// Function to check if the student passed or failed
bool isPassed(float average) {
    return average >= 50; // Pass if the average is 50 or greater
}

// Function to print the results
void printResult(int total, float average) {
    cout << "The sum of the marks is: " << total << endl;
    cout << "The average of the marks is: " << average << endl;

    if (isPassed(average)) {
        cout << "Result: Passed" << endl;
    } else {
        cout << "Result: Failed" << endl;
    }
}

int main() {
    int mark1, mark2, mark3;

    // Read marks from the user
    readMarks(mark1, mark2, mark3);

    // Calculate the sum and average
    int total = calculateSum(mark1, mark2, mark3);
    float average = calculateAverage(total);

    // Print the results and the passing status
    printResult(total, average);

    return 0;
}
