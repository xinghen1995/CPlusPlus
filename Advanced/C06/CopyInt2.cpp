//: C06:CopyInt2.cpp
// Ignores ints that satify a predicate
#include <algorithm>
#include <cstddef>
#include <iostream>
using namespace std;

// You supply this predicate
bool gt15(int x) { return 15 < x; }

int main()
{
    int a[] = {10, 20, 30};
    const size_t SIZE = sizeof a / sizeof a[0];
    int b[SIZE];
    int *endb = remove_copy_if(a, a + SIZE, b, gt15);
    int *beginb = b;
    while (beginb != endb)
    {
        cout << *beginb++ << endl; // Prints 10 only
    }
} ///:~
