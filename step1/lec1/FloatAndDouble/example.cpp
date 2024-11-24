#include <iostream>
#include <iomanip> // For controlling decimal precision
using namespace std;

int main() {
    // Define the radius
    float radiusFloat = 7.12345f; // Radius as a float
    double radiusDouble = 7.12345; // Radius as a double

    // Define the value of pi
    float piFloat = 3.14159f; // Pi as a float
    double piDouble = 3.141592653589793; // Pi as a double

    // Calculate area using float
    float areaFloat = piFloat * radiusFloat * radiusFloat;

    // Calculate area using double
    double areaDouble = piDouble * radiusDouble * radiusDouble;

    // Output results with precision
    cout << fixed << setprecision(7); // Set output precision to 7 decimal places
    cout << "Area calculated using float: " << areaFloat << endl;

    cout << fixed << setprecision(15); // Set output precision to 15 decimal places
    cout << "Area calculated using double: " << areaDouble << endl;

    return 0;
}
