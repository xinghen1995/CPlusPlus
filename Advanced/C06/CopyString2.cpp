//: C06:CopyString2.cpp
// Replaces strings that satify a predicate.
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

// The predicate
bool contain_e(const string& s)
{
    return s.find('e') != string::npos;
}

int main()
{
    string a[] = {"read", "my", "lips"};
    const size_t SIZE = sizeof a / sizeof a[0];
    string b[SIZE];
    string* endb = replace_copy_if(a, a + SIZE, b,
            contain_e, string("kiss"));
    string* beginb = b;
    while (beginb != endb)
        cout << *beginb++ << endl;
} ///:~
