//: C02:SimpleDateTest.cpp
// {L} Date
#include <iostream>
#include "Date.h" // From Appendix B
using namespace std;

// Test machinery
int nPass = 0, nFail = 0;
void test(bool t) 
{
    if (t)
    {
        ++nPass;
    }
    else
    {
        ++nFail;
    }
}

int main()
{
    Date mybday(1951, 10, 1);
    test(mybday.getYear() == 1951);
    test(mybday.getMonth() == 10);
    test(mybday.getDay() == 1);
    cout << "Passed: " << nPass << ", Failed: "
        << nFail << endl;
} ///:~
