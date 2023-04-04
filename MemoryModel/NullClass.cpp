#include <iostream>

class NullClass
{
};

int main()
{
    NullClass a;
    std::cout << "sizeof(NullClass) = " << sizeof(a) << std::endl;
}
