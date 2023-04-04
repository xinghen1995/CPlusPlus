//: C08:ConstMember.cpp
class X
{
    int i;
public:
    X(int ii);
    int f() const; // declaration
    void g();
};

X::X(int ii) : i(ii) {}

int X::f() const // const is needed
{
    return i;
}

void X::g() {}

int main()
{
    X x1 (10);
    const X x2(20);
    x1.f();
    x2.f();

    x1.g();
    //! x2.g(); // g() is not const function, 
                // can't be invoked by const class instance
} ///:~
