#include <iostream>

class Base
{
public:
    int a;
    virtual void f()
    {
        std::cout << "Base::f()" << std::endl;
    }
    void g()
    {
        std::cout << "Base::g()" << std::endl;
    }
};

class Drive : public Base
{
public:
    int b; // even this is a comment, sizeof(Drive) also 16
    void f()
    {
        std::cout << "Drive::f()" << std::endl;
    }
    void h()
    {
        std::cout << "Drive::g()" << std::endl;
    }
};

int main()
{
    Base a;
    Drive b;
    a.f();
    b.f();
    a.g();
    b.g();
    b.h();
    std::cout << "sizeof(Base)=" << sizeof(Base) << std::endl;
    std::cout << "sizeof(Drive)=" << sizeof(Drive) << std::endl;
}
