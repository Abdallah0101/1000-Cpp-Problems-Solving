/*
 * Simple Calculator with Enum
 * This program asks the user to enter two numbers and an operation type (+, -, *, /).
 * It performs the specified operation and prints the result.
 */

#include <iostream>
using namespace std;

// Enum for operation types
enum OperationType { ADD = '+', SUBTRACT = '-', MULTIPLY = '*', DIVIDE = '/' };

// Function to read input numbers and operation type
void readInputs(double& number1, double& number2, OperationType& operationType) {
    char operation;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the operation type (+, -, *, /): ";
    cin >> operation;

    // Validate and assign operation type
    switch (operation) {
        case '+': operationType = ADD; break;
        case '-': operationType = SUBTRACT; break;
        case '*': operationType = MULTIPLY; break;
        case '/': operationType = DIVIDE; break;
        default:
            cout << "Error: Invalid operation type." << endl;
            exit(1); // Terminate the program
    }
}

// Function to perform the specified calculation
double performCalculation(double number1, double number2, OperationType operationType) {
    switch (operationType) {
        case ADD:
            return number1 + number2; // Addition
        case SUBTRACT:
            return number1 - number2; // Subtraction
        case MULTIPLY:
            return number1 * number2; // Multiplication
        case DIVIDE:
            if (number2 != 0) {
                return number1 / number2; // Division
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                exit(1); // Terminate the program
            }
    }
    return 0; // Default return to silence compiler warnings
}

// Function to print the result
void printResult(double result) {
    cout << "The result is: " << result << endl;
}

int main() {
    double number1, number2;
    OperationType operationType;

    // Read inputs from the user
    readInputs(number1, number2, operationType);

    // Perform the calculation
    double result = performCalculation(number1, number2, operationType);

    // Print the result
    printResult(result);

    return 0;
}
