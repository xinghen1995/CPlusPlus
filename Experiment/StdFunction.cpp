#include <iostream>
#include <functional>

struct Foo
{
    Foo(int num) : num_(num)
    {
    }

    void print_add(int i) const
    {
       std::cout << num_ + i << "\n"; 
    }

    int num_;
};

void print_num(int i)
{
    std::cout << i << "\n";
}

struct PrintNum
{
    void operator()(int i) const
    {
        std::cout << i << "\n";
    }
};

int main(int argc, char* argv[])
{
    // store a free funtion
    std::function<void(int)> f_display = print_num;
    f_display(-9);

    // store a lamba
    std::function<void()> f_display_42 = []() { print_num(42); };
    f_display_42();

    // store the result of the call to std::bind
    std::function<void()> f_display_31334 = std::bind(print_num, 31334);
    f_display_31334();

    // store a call to a number function
    std::function<void(const Foo&, int)> f_add_display = &Foo::print_add;
    const Foo foo(314159);
    f_add_display(foo, 1);
    f_add_display(314159, 1);

    // store a call to a data member accessor
    std::function<int(Foo const&)> f_num = &Foo::num_;
    std::cout << "num_: " << f_num(foo) << std::endl;

    // store a call to a member funtion and object
    using std::placeholders::_1;
    std::function<void(int)> f_add_display2 = std::bind(&Foo::print_add, foo, _1);
    f_add_display2(2);

    // store a call to a member function and object ptr
    std::function<void(int)> f_add_display3 = std::bind(&Foo::print_add, &foo, _1);
    f_add_display3(3);

    // store a call to a function object
    std::function<void(int)> f_display_obj = PrintNum();
    f_display_obj(18);
}
