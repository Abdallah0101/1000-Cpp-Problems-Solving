/*
 * Program to print your name on the screen.
 */

#include <iostream>
#include <string>

using namespace std;

// Function to print the name
void printName(string Name)
{
    cout << "\n Your Name is: " << Name << endl;
} 

int main()
{
    printName("Abdalla");  // Call the function with the name
    return 0;
}
