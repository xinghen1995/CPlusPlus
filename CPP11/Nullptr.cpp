//: Nullptr.cpp
#include <iostream>
using namespace std;

void foo(char *)
{
    cout << "foo(char*)" << endl;
}

void foo(int)
{
    cout << "foo(int)" << endl;
}

int main()
{
    //! foo(NULL); // call to 'foo' is ambiguous
    foo(0); 
    foo(nullptr);
} ///:~
