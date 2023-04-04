//: C07:Reversible.cpp
// Using reversible containers.
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "../require.h"
using namespace std;

int main()
{
    ifstream in("../Advanced/C07/Reversible.cpp");
    assure(in, "../Advanced/C07/Reversible.cpp");
    string line;
    vector<string> lines;
    while (getline(in, line))
    {
        lines.push_back(line);
    }
    for (vector<string>::reverse_iterator r = lines.rbegin();
            r != lines.rend(); r++)
    {
        cout << *r << endl;
    }
} ///:~
