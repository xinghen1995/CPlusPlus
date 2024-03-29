//: C02:Stream2.cpp
// More stream features
#include <iostream>
using namespace std;

int main()
{
    // Sepcifying formats with manipulators:
    cout << "a number in decimal: "
        << dec << 15 << endl;
    cout << "in octal: " << oct << 15 << endl;
    cout << "in hex: " << hex << 15 << endl;
    cout << "a floating-point number: "
        << 3.14159 << endl;
    cout << "non-pointing char (escape): "
        << char(27) << endl;
} ///:~
