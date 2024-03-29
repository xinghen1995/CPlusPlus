//: C07:Stlshape.cpp
// Simple shapes using the STL
#include <vector>
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // 虚函数作为接口
    virtual ~Shape()
    {
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle::draw" << endl;
    }
    ~Circle()
    {
        cout << "~Circle" << endl;
    }
}; 

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Triangle::draw" << endl;
    }
    ~Triangle()
    {
        cout << "~Triangle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Square::draw" << endl;
    }
    ~Square()
    {
        cout << "~Square" << endl;
    }
};

int main()
{
    typedef std::vector<Shape*> Container; // 容器常见用法，父类指针存在容器中
    typedef Container::iterator Iter;
    Container shapes;
    shapes.push_back(new Circle);
    shapes.push_back(new Square);
    shapes.push_back(new Triangle);
    for (Iter i = shapes.begin(); i != shapes.end(); i++)
    {
        (*i)->draw();
        // ... Sometime later:
    }
    for (Iter j = shapes.begin(); j != shapes.end(); j++)
    {
        delete *j;
    }
} ///:~
