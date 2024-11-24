// Create a program to find whether a number (input by the user) can fit within int, long, or long long.


#include <iostream>
#include <climits>

using namespace std;

int main() {
    long long num;

    cout << "Enter a number: ";
    cin >> num;

    // Check if the number fits within int
    if (num >= INT_MIN && num <= INT_MAX) {
        cout << num << " can fit in int.\n";
    }

    // Check if the number fits within long
    if (num >= LONG_MIN && num <= LONG_MAX) {
        cout << num << " can fit in long.\n";
    }

    // Check if the number fits within long long
    if (num >= LLONG_MIN && num <= LLONG_MAX) {
        cout << num << " can fit in long long.\n";
    }

    return 0;
}