#include <iostream>

using namespace std;

int divide(int a, int b = 2)
{
    return a / b;
}

int main(int argc, char* argv[])
{
    cout << divide(12) << endl;
    cout << divide(12, 4) << endl;
    return 0;
}
