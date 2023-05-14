#include <iostream>
using namespace std;

class A
{
protected:
    int a = 2;

public:
    A()
    {
        cout << "A's constructor called" << endl;
    }
};

class B : public A
{
protected:
    int b = 3;

public:
    B()
    {
        cout << "B's constructor called" << endl;
        cout << "a (of class A, from class B) = " << a << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C's constructor called" << endl;
        cout << "a (of class A, from class C) = " << a << endl;
        cout << "b (of class B, from class C) = " << b << endl;
    }
};

int main()
{
    C c;
    return 0;
}