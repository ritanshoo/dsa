#include <iostream>
#include <algorithm> // For predefined array functions like sort, reverse, etc.
#include <numeric>   // For predefined functions like accumulate
using namespace std;

int main() {
    // Step 1: Declare and initialize an array
    int arr[5] = {10, 20, 30, 40, 50}; // Array of size 5 initialized with values

    // Step 2: Display array elements using a loop
    cout << "Array elements (initial): ";
    for (int i = 0; i < 5; i++) { // Iterate over the array
        cout << arr[i] << " ";    // Access elements using the index
    }
    cout << endl;

    // Step 3: Take input into an array
    int inputArr[5]; // Array to store user input
    cout << "Enter 5 integers: for array at memory location" << inputArr << endl;
    for (int i = 0; i < 5; i++) {
        cin >> inputArr[i]; // Take input from the user
    }

    // Step 4: Display the user input array
    cout << "Array elements (user input): ";
    for (int i = 0; i < 5; i++) {
        cout << inputArr[i] << " ";
    }
    cout << endl;

    // Step 5: Get the size of an array
    // Note: For built-in arrays, the size must be calculated using sizeof.

    cout << "sizeof(inputArr) " <<  sizeof(inputArr) << endl;
    cout << "sizeof(inputArr[0])" <<  sizeof(inputArr[0])<< endl;
    size_t arrSize = sizeof(inputArr) / sizeof(inputArr[0]);

    cout << "Size of the array: " << arrSize << endl;

    // Step 6: Sort the array (ascending order)
    sort(inputArr, inputArr + arrSize); // Sort from the start to the end of the array
    cout << "Array after sorting (ascending): ";
    for (int i = 0; i < arrSize; i++) {
        cout << inputArr[i] << " ";
    }
    cout << endl;

    // Step 7: Reverse the array
    reverse(inputArr, inputArr + arrSize); // Reverse the array in place
    cout << "Array after reversing: ";
    for (int i = 0; i < arrSize; i++) {
        cout << inputArr[i] << " ";
    }
    cout << endl;

    // Step 8: Find the maximum and minimum element
    int maxElement = *max_element(inputArr, inputArr + arrSize); // Use max_element
    int minElement = *min_element(inputArr, inputArr + arrSize); // Use min_element
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    // Step 9: Find the sum of all elements
    int sum = accumulate(inputArr, inputArr + arrSize, 0); // Sum up all elements
    cout << "Sum of array elements: " << sum << endl;

    // Step 10: Search for an element
    int key = 30; // Element to search for
    if (find(inputArr, inputArr + arrSize, key) != inputArr + arrSize) {
        cout << "Element " << key << " is found in the array." << endl;
    } else {
        cout << "Element " << key << " is not found in the array." << endl;
    }

    return 0;
}
