#include <iostream>
using namespace std;

class CBase
{
public:
    virtual void show()
    {
        cout << "CBase" << endl;
    }

    virtual void func()
    {
        cout << "func in CBase" << endl;
    }

protected:
    int base = 15;
};

class CA : public virtual CBase
{
public:
    void show() override
    {
        cout << hex << this << endl;
        cout << "CA" << endl;
    }
    
    void func() override
    {
        cout << hex << this << endl;
        cout << "func in CA" << endl;
    }
protected:
    int a = 31;
};

int main()
{
    CA obj_a;
    CBase& obj_b = obj_a;

    obj_b.func();
    return 0;
}
