//: C03:GotoKeyword.cpp
// The infamous goto is suppoerted in C++
#include <iostream>
using namespace std;

int main()
{
    long val = 0;

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 100; j += 10)
        {
            val = i * j;
            if (val > 47000)
            {
                goto bottom;
                // Break would only go to the outer 'for'
            }
        }
    }
    bottom: // A label
    cout << val << endl;
} ///:~
