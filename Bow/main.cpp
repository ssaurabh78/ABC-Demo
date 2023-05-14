#include <iostream>
using namespace std;

template <class T1, class T2>
class Complex
{
    T1 real;
    T2 imaginary;

public:
    Complex(T1 r = 0, T2 i = 0)
    {
        this->real = r;
        this->imaginary = i;
    }

    void print() // display the number
    {
        cout << "Complex Number: ";
        cout << real << " + i" << imaginary << endl;
    }
};

int main()
{
    Complex<int, int> c1(90, 7);
    c1.print();
    Complex<float, float> c2(10.5, 9.5);
    c2.print();
    Complex<int, float> c3(10, 9.5);
    c3.print();
    return 0;
}