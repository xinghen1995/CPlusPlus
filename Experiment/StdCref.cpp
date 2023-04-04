/* 1. std::ref表示引用，std::cref表示const引用
 * 2. std::bind使用的是值传递，传递引用需要reference_wrapper
 * */
#include <iostream>
#include <functional>

void f(int& n1, int& n2, const int& n3)
{
    std::cout << "In Function " << n1 << " " << n2 << " " << n3 << std::endl;
    ++n1;
    ++n2;
}

int main(int argc, char* argv[])
{
    int n1 = 1, n2 = 2, n3 = 3;
    std::function<void()> bound_f = std::bind(f, n1, std::ref(n2), std::cref(n3));
    n1 = 10;
    n2 = 20;
    n3 = 30;
    std::cout << "Before Function " << n1 << " " << n2 << " " << n3 << std::endl;
    bound_f();
    std::cout << "After Function " << n1 << " " << n2 << " " << n3 << std::endl;
    return 0;
}
