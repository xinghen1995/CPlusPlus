//: C07:Intset.cpp
// Simple use of STL set
#include <cassert>
#include <set> // 标准库有set文件，可以直接使用
using namespace std;

int main()
{
    set<int> intset;
    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 10; j++)
            intset.insert(j); // set可以使用insert增加元素
    assert(intset.size() == 10);
} ///:~
