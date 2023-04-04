//: C04:Sbufget.cpp
// Copies a file to standard output.
#include <fstream>
#include <iostream>
#include "../require.h"
using namespace std;

int main()
{
    ifstream in("../Advanced/C04/Sbufget.cpp");
    assure(in, "../Advanced/C04/Sbufget.cpp");
    streambuf& sb = *cout.rdbuf();
    while (!in.get(sb).eof())
    {
        if (in.fail()) // Found blank line
        {
            in.clear();
        }
        cout << char(in.get()); // Process '\n'
    }
} ///:~
