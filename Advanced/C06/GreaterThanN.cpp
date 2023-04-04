//: C06:GreaterThanN.cpp
#include <iostream>
using namespace std;

class gt_n
{
    int value;
public:
    gt_n(int val) : value(val) {}
    bool operator()(int n) { return n > value; }
};

int main()
{
    gt_n f(4);
    cout << f(3) << endl; // Print 0 (for false)
    cout << f(5) << endl; // Print 1 (for true)
} ///:~
