/*
1. Write a program to take the height of 10 people (in centimeters) as input using int and calculate their average height.

*/

#include <iostream>
using namespace std;

int main()
{
    int numberOfPeople, heightTotal = 0;

    // Input: Number of people
    cout << "Enter the number of people: ";
    cin >> numberOfPeople;

    // Input validation
    if (numberOfPeople <= 0)
    {
        cout << "Invalid number of people. Exiting program." << endl;
        return 1;
    }

    // Input heights and calculate total in a single loop
    cout << "Enter the heights of " << numberOfPeople << " people (space-separated): ";
    for (int i = 0; i < numberOfPeople; i++)
    {
        int height;
        cin >> height;
        heightTotal += height;
    }

    // Output: Sum and average of heights
    cout << "Sum of heights is: " << heightTotal << endl;
    cout << "Average height is: " << static_cast<double>(heightTotal) / numberOfPeople << endl;

    return 0;
}
