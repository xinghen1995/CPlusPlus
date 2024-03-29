//: C06:CopyInts4.cpp
// Use a standard function object and adapter.
#include <algorithm>
#include <cstddef>
#include <functional>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    int a[] = {10, 20, 30};
    const size_t SIZE = sizeof a / sizeof a[0];
    remove_copy_if(a, a + SIZE,
            ostream_iterator<int>(cout, "\n"),
            bind2nd(greater<int>(), 15)); // 函数对象，传入一个参数和绑定一个定值
} ///:~
