
/*
Store the population of multiple countries using an array of long long int. Calculate the total population and check if the result fits within the range of long long int.
*/
#include <iostream>
#include <limits> // For numeric limits of long long int
using namespace std;

int main()
{
    int numberOfCountries;
    cout << "Enter the number of countries: ";
    cin >> numberOfCountries;

    // Input validation
    if (numberOfCountries <= 0)
    {
        cout << "Invalid number of countries. Exiting program." << endl;
        return 1;
    }

    // Array to store populations
    long long int populations[numberOfCountries];
    long long int totalPopulation = 0;

    cout << "Enter the population of each country:" << endl;

    // Input population for each country and calculate the total
    for (int i = 0; i < numberOfCountries; i++)
    {
        cout << "Country " << (i + 1) << ": ";
        cin >> populations[i];

        // Add population to the total
        totalPopulation += populations[i];

        // Check for overflow
        if (totalPopulation < 0) // Overflow condition for signed long long int
        {
            cout << "Error: Total population exceeded the range of long long int!" << endl;
            return 1;
        }
    }

    // Display results
    cout << "Total population is: " << totalPopulation << endl;

    // Check if it fits within the range of long long int
    if (totalPopulation <= numeric_limits<long long int>::max())
    {
        cout << "The total population fits within the range of long long int." << endl;
    }
    else
    {
        cout << "The total population exceeds the range of long long int." << endl;
    }

    return 0;
}
