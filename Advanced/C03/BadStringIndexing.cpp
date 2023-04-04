//: C03:BadStringIndexing.cpp
#include <exception>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s("1234");
    // at() saves you by throwing an exception:
    try
    {
        s.at(5);
    }
    catch(exception& e)
    {
        cerr << e.what() << endl;
    }
} ///:~
