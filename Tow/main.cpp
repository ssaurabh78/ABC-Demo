#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        cout << "a / b = " << a / b << endl;
    }
    catch (int e)
    {
        if (e == 0)
        {
            cout << "Exception caught: Division by zero" << endl;
        }
        else
        {

            cout << "Exception caught: " << e << endl;
        }
    }
    return 0;
}