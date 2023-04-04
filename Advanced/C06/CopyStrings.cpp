//: C06:CopyStrings.cpp
// copies strings.
#include <algorithm>
#include <cassert>
#include <cstddef>
#include <cstddef>
#include <string>
using namespace std;

int main()
{
    string a[] = {"read", "my", "lips"};
    const size_t SIZE = sizeof a / sizeof a[0];
    string b[SIZE];
    copy(a, a + SIZE, b); // copy same to memcpy
    assert(equal(a, a + SIZE, b));
} ///:~
