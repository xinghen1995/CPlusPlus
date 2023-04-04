//: C03:Charlist.cpp
// Display all the ASCII characters
// Demonstrates "for"
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 128; i++)
    {
        if (i != 26) // ANSI Terminal Clear Screen
        {
            cout << " value: " << i
                << " character: " 
                << char(i) // Type conversion
                << endl;
        }
    }
} ///:~
