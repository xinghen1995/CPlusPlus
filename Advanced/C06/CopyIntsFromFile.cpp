//: C06:CopyIntsFromFile.cpp
// Uses an input stream iterator.
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include "../require.h"
using namespace std;

bool gt15(int x) { return 15 < x; }

int main()
{
    ofstream ints("someInts.dat");
    ints << "1 3 47 5 84 9";
    ints.close();
    ifstream inf("someInts.dat");
    assure(inf, "someInts.dat");
    remove_copy_if(istream_iterator<int>(inf),
            istream_iterator<int>(), // 该构造函数构造了一个特殊值，指示流尾部
            ostream_iterator<int>(cout, "\n"), gt15);
} ///:~
