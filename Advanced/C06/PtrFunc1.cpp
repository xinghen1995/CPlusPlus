//: C06:PtrFunc1.cpp
// Using ptr_func() with an unary function.
#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int d[] = { 123, 94, 10, 314, 315 };
const int DSZ = sizeof d / sizeof d[0];
bool isEven(int x) { return x % 2 == 0; }

int main()
{
    vector<bool> vb;
    transform(d, d + DSZ, back_inserter(vb), not1(ptr_fun(isEven)));
    copy(vb.begin(), vb.end(), ostream_iterator<bool>(cout, "\n"));
    cout << endl;
} ///:~
