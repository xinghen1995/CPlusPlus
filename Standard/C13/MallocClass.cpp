//: C13:MallocClass.cpp
// Malloc with class object
// What you have to do if not for "new"
#include "../require.h"
#include <cstdlib> // malloc() & free()
#include <cstring> // memset()
#include <iostream>
using namespace std;

class Obj
{
    int i, j, k;
    enum { sz = 100 };
    char buf[sz];
public:
    void initialize()
    { // Can't use constructor
        cout << "initializing Obj" << endl;
        i = j = k = 0;
        memset(buf, 0, sz);
    }
    void destroy() const
    { // Can't use destructor
        cout << "destroying Obj" << endl;
    }
};

int main()
{
    Obj* obj = (Obj*)malloc(sizeof(Obj));
    require(obj != 0);
    obj->initialize();
    // ... something later:
    obj->destroy();
    free(obj);
} ///:~
