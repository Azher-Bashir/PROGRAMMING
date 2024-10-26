#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Such that the equation ax^2 + bx + c = 0" << endl;
    cout << "Then enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    if ((pow(b, 2) - 4 * a * c) == 0)
    {
        cout << "The equation has single repeated roots" << endl;
    }
    if ((pow(b, 2) - 4 * a * c) > 0)
    {
        cout << "The equation has two equal roots." << endl;
    }
    if ((pow(b, 2) - 4 * a * c) < 0)
    {
        cout << "The equation has complex roots roots" << endl;
    }
    system ("pause");
    return 0;
}