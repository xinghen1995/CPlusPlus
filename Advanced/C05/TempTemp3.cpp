//: C03:TempTemp3.cpp
// Template template parameters and default arguments.
#include <cstddef>
#include <iostream>
using namespace std;

template<class T, size_t N = 10> // A default argument
class Array
{
    T data[N];
    size_t count;
public:
    Array()
    {
        count = 0;
    }

    void push_back(const T& t)
    {
        if (count < N)
        {
            data[count++] = t;
        }
    }

    void pop_back()
    {
        if (count > 0)
        {
            --count;
        }
    }

    T* begin()
    {
        return data;
    }

    T* end()
    {
        return data + count;
    }
};

template<class T, template<class, size_t = 10> class Seq>
class Container
{
    Seq<T> seq; // Dafault used
public:
    void append(const T& t)
    {
        seq.push_back(t);
    }

    T* begin()
    {
        return seq.begin();
    }

    T* end()
    {
        return seq.end();
    }
};

int main()
{
    Container<int, Array> container;
    container.append(1);
    container.append(2);
    int* p = container.begin();
    while (p != container.end())
    {
        cout << *p++ << endl;
    }
}
