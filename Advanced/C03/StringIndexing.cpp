//: C03:StringIndexing.cpp
#include <cassert>
#include <string>
using namespace std;

int main()
{
    string s("123");
    assert(s[1] == '2');
    assert(s.at(1) == '2');
} ///:~
