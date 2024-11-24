#include <iostream>
#include <string> // Include the string library
using namespace std;

int main() {
    // Declare and initialize strings
    string str1 = "Hello, ";  // A string initialized with "Hello, "
    string str2 = "World!";   // A string initialized with "World!"
    string str3;              // An empty string to store results

    // Concatenation: Combine two strings
    str3 = str1 + str2; // '+' operator returns a new string (memory allocated for the result)
    cout << "Concatenated String: " << str3 << endl;

    // Length of a string
    // 'length()' and 'size()' both return the number of characters in the string.
    // 'size_t' is the return type, which is an unsigned integer type for representing sizes.
    size_t len = str3.length(); // No new memory is allocated; just returns a value.
    cout << "Length of str3: " << len << endl;

    // Access characters in a string
    // Accessing a character does not change the memory; it simply retrieves the character.
    cout << "First character of str3: " << str3[0] << endl;
    cout << "Last character of str3: " << str3[str3.length() - 1] << endl;

    
    // Substring: Extract a portion of a string
    // 'substr()' creates a new string (new memory is allocated for the result).
    string subStr = str3.substr(7, 5); // Extracts "World"
    cout << "Substring of str3 (start at index 7, length 5): " << subStr << endl;

    // Find a substring within a string
    // 'find()' does not allocate memory; it returns the starting index of the substring or string::npos if not found.
    size_t pos = str3.find("World"); // Find the substring "World"
    if (pos != string::npos) { // string::npos means "not found"
        cout << "Substring 'World' found at position: " << pos << endl;
    } else {
        cout << "Substring 'World' not found!" << endl;
    }

    // Replace a substring within a string
    // 'replace()' modifies the string in place (no new memory is allocated).
    str3.replace(pos, 5, "Universe"); // Replace "World" (length 5) with "Universe"
    cout << "String after replacement: " << str3 << endl;

    // Append: Add to the end of a string
    // 'append()' modifies the string in place but may allocate additional memory if the capacity is exceeded.
    str3.append(" Welcome!"); 
    cout << "String after appending: " << str3 << endl;

    // Erase: Remove characters from a string
    // 'erase()' modifies the string in place (memory for the erased portion is deallocated).
    str3.erase(13, 8); // Remove 8 characters starting from index 13
    cout << "String after erasing: " << str3 << endl;

    // Compare strings
    string str4 = "Hello";
    string str5 = "World";
    // 'compare()' does not allocate memory; it returns an integer indicating the comparison result.
    if (str4.compare(str5) == 0) { // Returns 0 if the strings are equal
        cout << "Strings are equal!" << endl;
    } else {
        cout << "Strings are not equal!" << endl;
    }

    // Check if a string is empty
    string emptyStr = ""; // An empty string
    // 'empty()' does not modify memory; it checks if the string is empty.
    if (emptyStr.empty()) {
        cout << "The string is empty!" << endl;
    } else {
        cout << "The string is not empty!" << endl;
    }

    // Clear: Empty a string
    // 'clear()' deallocates the memory for the contents of the string.
    str3.clear(); 
    cout << "String after clearing: '" << str3 << "'" << endl;

    return 0;
}
