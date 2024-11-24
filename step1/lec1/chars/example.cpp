// Store a person's name as a char array and their age as an int. Print the name and age together.

#include <iostream>
using namespace std;

int main()
{
    const int MAX_NAME_LENGTH = 100; // Maximum length for the name
    char name[MAX_NAME_LENGTH];
    int age;

    // Input: Name and age
    cout << "Enter your name: ";
    cin.getline(name, MAX_NAME_LENGTH); // Use getline to allow spaces in the name

    cout << "Enter your age: ";
    cin >> age;

    // Output: Name and age
    cout << "Your name is: " << name << endl;
    cout << "Your age is: " << age << endl;

    return 0;
}
