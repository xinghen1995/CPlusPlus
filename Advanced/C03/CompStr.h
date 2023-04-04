//: C03:CompStr.h
#ifndef COMPSTR_H
#define COMPSTR_H
#include <string>
#include "../TestSuite/Test.h"
using namespace std;

class CompStrTest : public TestSuite::Test
{
public:
    void run()
    {
        // strings to compare
        string s1("This");
        string s2("That");
        test_(s1 == s2);
        test_(s1 != s2);
        test_(s1 > s2);
        test_(s1 >= s2);
        test_(s1 < s2);
        test_(s1 <= s2);
        test_(s2 < s1);
        test_(s2 <= s1);
        test_(s1 <= s1);
    }
};
#endif // COMPSTR_H
