//: CPP11/Lamba1.cpp
#include <iostream>

int main()
{
    int a = 1, b = 1, c = 1;

    auto m1 = [a, &b, &c]() mutable {
        auto m2 = [a, b, &c]() mutable {
            std::cout << a << b << c << "\n";
            a = 4, b = 4, c = 4;
        };
        a = 3, b = 3, c = 3;
        m2();
    };
    a = 2, b = 2, c = 2;
    m1();
    std::cout << a << b << c << std::endl; // print 234
} ///:~
