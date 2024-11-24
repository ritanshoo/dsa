#include <iostream>
using namespace std;

// Main function: The entry point of the program
int main() {
    int num1, num2;  // Declare two integers for input
    char operation;  // Declare a character to store the operator

    // Input: Ask the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Input: Ask the user to choose an operation (+, -, *, /)
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Switch statement to perform the operation based on the user's choice
    switch (operation) {
        case '+': // Case for addition
            cout << "Result: " << (num1 + num2) << endl;
            break; // Break prevents further execution of other cases

        case '-': // Case for subtraction
            cout << "Result: " << (num1 - num2) << endl;
            break;

        case '*': // Case for multiplication
            cout << "Result: " << (num1 * num2) << endl;
            break;

        case '/': // Case for division
            if (num2 != 0) { // Check to avoid division by zero
                cout << "Result: " << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        default: // Default case for invalid operators
            cout << "Error: Invalid operation entered." << endl;
            break;
    }

    return 0; // Indicate that the program executed successfully
}
