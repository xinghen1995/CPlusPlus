//: C03:Menu.cpp
// Simple menu program demonstrating
// the use of "break" and "continue"
#include <iostream>
using namespace std;

int main()
{
    char c; // To hold response
    while (true)
    {
        cout << "MAIN MENU:" << endl;
        cout << "l: left, r: right, q: quit -> ";
        cin >> c;
        if (c == 'q')
        {
            break; // Out of "while(1)"
        }
        if (c == 'l')
        {
            cout << "LEFT MENU:" << endl;
            cout << "select a or b: ";
            cin >> c;
            if (c == 'a')
            {
                cout << "you chose 'a'" << endl;
                continue; // Back to main menu
            }
            if (c == 'b')
            {
                cout << "you chose 'b'" << endl;
                continue; // Back to main menu
            }
            else
            {
                cout << "you didn't choose 'a' or 'b'!" << endl;
                continue; // Back to main menu
            }
        }
        if (c == 'r')
        {
            cout << "RIGHT MENU:" << endl;
            cout << "select c or d: ";
            cin >> c;
            if (c == 'c')
            {
                cout << "you chose 'c'" << endl;
                continue; // Back to main menu
            }
            if (c == 'd')
            {
                cout << "you chose 'd'" << endl;
                continue; // Bacck to main menu
            }
            else
            {
                cout << "you didn't chose 'c' or 'd'!" << endl;
                continue; // Back to main menu
            }
        }
        cout << "you must type l or r or q!" << endl;
    } // while (true)
    cout << "quitting menu..." << endl;
} ///:~
