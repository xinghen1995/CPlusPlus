//: C11:HowMany.cpp
// A class that counts its objects
#include <fstream>
#include <string>
using namespace std;
ofstream out("HowMany.out");

class HowMany
{
    static int objectCount;
public:
    HowMany()
    {
        objectCount++;
    }
    static void print(const string& msg = "")
    {
        if (msg.size() != 0)
        {
            out << msg << ": ";
        }
        out << "objectCount = "
            << objectCount << endl;
    }
    ~HowMany()
    {
        objectCount--;
        print("~HowMany()");
    }
};
int HowMany::objectCount = 0;

// Pass and return By VALUE:
HowMany f(HowMany x) // copy by bit and will not invoke constructor
{
    x.print("x argment inside f()");
    return x;
}

int main()
{
    HowMany h;
    HowMany::print("after construction of h");
    HowMany h2 = f(h);
    HowMany::print("after call to f()");
} ///:~
