#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    char c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the operation (+, -, *, /, %) you want to perform: ";
    cin >> c;
    cout << "Enter the value of b: ";
    cin >> b;
    if (c == '+')
    {
        cout << "The result of " << a << " + " << b << " is " << a + b << endl;
    }
    else if (c == '-')
    {
        cout << "The result of " << a << " - " << b << " is " << a - b << endl;
    }
    else if (c == '*')
    {
        cout << "The result of " << a << " * " << b << " is " << a * b << endl;
    }
    else if (c == '/')
    {
        if (b != 0)
        {
            cout << "The result of " << a << " / " << b << " is " << a / b << endl;
        }
        else
        {
            cout << "The division is not possible" << endl;
        }
    }
    else if (c == '%')
    {
        if (b != 0)
        {
            cout << "The result of " << a << " % " << b << " is " << a % b << endl;
        }
        else
        {
            cout << "mod is not possible" << endl;
        }
    }
    system("pause");
    return 0;
}