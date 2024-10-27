// QUESTION # 08 _ Write a C++ program to implement a simple calculator using a switch-
//  case statement. Explain why is a switch-case statement a good choice for this type of
//  program?
#include <iostream>

using namespace std;

int main()
{
    double a, c;
    char b;
    int d, e;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the operation (*,/,+,-,%) you want to perform: ";
    cin >> b;
    cout << "Enter the second number: ";
    cin >> c;
    switch (b)
    {
    case '+':
        cout << a << " + " << c << " = " << a + c << endl;
        break;
    case '-':
        cout << a << " - " << c << " = " << a - c << endl;
        break;
    case '*':
        cout << a << " * " << c << " = " << a * c << endl;
        break;
    case '/':
        if (c != 0)
            cout << a << " / " << c << " = " << a / c << endl;
        else
            cout << "Error! Division by zero is not allowed." << endl;
        break;
    case '%':
        if (c != 0)
        {
            d = a;
            e = c;
            cout << d << " % " << e << " = " << d % e << endl;
        }
        else
            cout << "Error! mod by zero is not allowed." << endl;
        break;
    }
    system("pause");
    return 0;
}