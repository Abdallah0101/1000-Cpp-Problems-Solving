/*
 * Grade Classification Program
 * This program asks the user to enter a grade and classifies it into
 * a letter grade based on the specified ranges.
 */

#include <iostream>
using namespace std;

// Function to read a grade from the user
int readGrade() {
    int grade;
    cout << "Please enter your grade (0-100): ";
    cin >> grade;
    return grade;
}

// Function to determine the letter grade
char classifyGrade(int grade) {
    if (grade >= 90 && grade <= 100) {
        return 'A';
    } else if (grade >= 80 && grade <= 89) {
        return 'B';
    } else if (grade >= 70 && grade <= 79) {
        return 'C';
    } else if (grade >= 60 && grade <= 69) {
        return 'D';
    } else if (grade >= 50 && grade <= 59) {
        return 'E';
    } else {
        return 'F';
    }
}

// Function to print the letter grade
void printGrade(char grade) {
    cout << "Your grade is: " << grade << endl;
}

int main() {
    // Read the grade
    int grade = readGrade();

    // Classify the grade
    char letterGrade = classifyGrade(grade);

    // Print the result
    printGrade(letterGrade);

    return 0;
}
