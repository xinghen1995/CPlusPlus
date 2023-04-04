//: C04:Stype.cpp
// Type a file to standard output.
#include <fstream>
#include <iostream>
#include "../require.h"
using namespace std;

int main()
{
    ifstream in("../Advanced/C04/Stype.cpp");
    assure(in, "../Advanced/C04/Stype.cpp");
    cout << in.rdbuf(); // Outputs entire file
} ///:~
