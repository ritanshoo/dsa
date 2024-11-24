
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    // pattern 1
    cout << endl;
    cout << "pattern 1 \n";
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // pattern 2
    cout << "pattern 2 \n";
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    // pattern 3
    cout << "pattern 3 \n";
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    // pattern 4
    cout << "pattern 4 \n";
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
    // pattern 5
    cout << "pattern 5 \n";
    cout << endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // pattern 6
    cout << "pattern 6 \n";
    cout << endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    // pattern 7
    cout << "pattern 7 \n";
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        int spaceCount = 0;
        for (int j = i; j <= 4; j++)
        {
            cout << " ";
            spaceCount++;
        }

        int stars = 9 - spaceCount * 2;
        for (int k = 1; k <= stars; k++)
        {
            cout << "*";
        }

        for (int j = i; j <= 4; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // pattern 8
    cout << "pattern 8 \n";
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        int spaceCount = 0;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
            spaceCount++;
        }

        int stars = 9 - spaceCount * 2;
        for (int k = 1; k <= stars; k++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}
