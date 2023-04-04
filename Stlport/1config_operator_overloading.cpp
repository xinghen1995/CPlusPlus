#include <iostream>
using namespace std;

class INT
{
friend ostream& operator<<(ostream& os, const INT& i);

public:
    INT(int i) : m_i(i) { }

    // prefix 
    INT& operator++()
    {
        ++(this->m_i);
        return *this;
    }

    // postfix
    const INT operator++(int)
    {
        INT temp = *this;
        ++(*this);
        return temp;
    }

    INT& operator--()
    {
        --(this->m_i);
        return *this;
    }

    const INT operator--(int)
    {
        INT temp = *this;
        --(*this);
        return temp;
    }

    int& operator*() const
    {
        return (int&)m_i;
    }
private:
    int m_i;
};

ostream& operator<<(ostream& os, const INT& i)
{
    os << '[' << i.m_i << ']';
    return os;
}

int main()
{
    INT I(5);
    cout << I++;
    cout << ++I;
    cout << I--;
    cout << --I;
    cout << *I;
}
