#include <random>
#include <iostream>
#include <memory>
#include <functional>

void f(int n1, int n2, int n3, const int& n4, int n5)
{
    std::cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << std::endl;
}

int g(int n1)
{
    return n1;
}

struct Foo
{
    void print_sum(int n1, int n2)
    {
        std::cout << (n1 + n2) << std::endl;
    }
    int data = 10;
};

int main()
{
    using namespace std::placeholders; // for _1, _2, _3...
    
    // demonstrates argument reordering and pass-by-reference
    int n = 7;
    // (_1 and _2 arm from std::placeholders, and represent feature
    // arguments that will be passed to f1)
    auto f1 = std::bind(f, _2, 42, _1, std::cref(n), n);
    n = 10;
    f1(1, 2, 1001); // 1 is bound by _1, 2 is bound by _2, 1001 is unused.
                   // makes a call to f(2, 42, 1, n, 7)
   
    // nested bind subexpressions share the placeholders
    auto f2 = std::bind(f, _3, std::bind(g, _3), _3, 4, 5);
    f2(10, 11, 12); // make a call to f(12, g(12), 12, 4, 5);

    // common use case: bind a RNG with a distribution
    std::default_random_engine e;
    std::uniform_int_distribution<> d(0, 10);
    auto rnd = std::bind(d, e); // a copy of e is stored in rnd
    for (int i = 0; i < 10; i++)
    {
        std::cout << rnd() << ' ';     
    }
    std::cout << std::endl;

    // bind a number to member function
    Foo foo;
    auto f3 = std::bind(&Foo::print_sum, &foo, 95, _1);
    f3(5);

    // bind to a pointer to data member
    auto f4 = std::bind(&Foo::data, _1);
    std::cout << f4(foo) << std::endl;

    // smart pointer can be used to call member of the reference objects, too
    std::cout << f4(std::make_shared<Foo>(foo)) << std::endl;
              // << f4(std::make_unique<Foo>(foo)) << std::endl; // gcc version is too low
}
