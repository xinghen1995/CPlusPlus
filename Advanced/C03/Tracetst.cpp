//: C03:Tracetst.cpp {-bor}
#include <iostream>
#include <fstream>
#include "../../Standard/require.h"
using namespace std;

#define TRACEON
#include "Trace.h"

int main()
{
    ifstream f("../Advanced/C03/Tracetst.cpp");
    assure(f, "../Advanced/C03/Tracetst.cpp");
    cout << f.rdbuf(); // Dumps file contents to file
} ///:~
