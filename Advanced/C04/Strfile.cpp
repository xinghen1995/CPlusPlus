//: C04:Strfile.cpp
// Stream I/O with files:
// The difference between get() & getline().
#include <iostream>
#include <fstream>
#include "../require.h"
using namespace std;

int main()
{
    const int SZ = 100; // Buffer size;
    char buf[SZ];
    {
        ifstream in("../Advanced/C04/Strfile.cpp"); // Read
        assure(in, "../Advanced/C04/Strfile.cpp"); // Verify open
        ofstream out("Strfile.out"); // Write
        assure(out, "Strfile.out");
        int i = 1; // Line counter

        // A less-convenient approach for line input:
        while (in.get(buf, SZ)) // Leaves \n input
        {
            in.get(); // Throw away next character (\n) 
            cout << buf << endl; // Must add \n
            // File output just like standard I/O:
            out << i++ << ": " << buf << endl;
        }
    } // Destructors close in & out

    ifstream in("Strfile.out");
    assure(in, "Strfile.out");
    // Move convenient line input:
    while (in.getline(buf, SZ)) // Removes \n
    {
        char* cp = buf;
        while (*cp != ':')
        {
            ++cp;
        }
        cp += 2; // Past ": "
        cout << cp << endl; // Must still add \n
    }
} ///:~
