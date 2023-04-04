#include <iostream>

template<class T>
struct plus
{
    T operator()(const T& x, const T& y) { return x + y; }
};

template<class T>
struct minus
{
    T operator()(const T& x, const T& y) { return x - y; }
};

int main()
{
    plus<int> plusobj;
    minus<int> minusobj;

    std::cout << plusobj(3, 5) << std::endl;
    std::cout << minusobj(3, 5) << std::endl;

    std::cout << plus<int>()(43, 50) << std::endl;
    std::cout << minus<int>()(43, 50) << std::endl;
}
