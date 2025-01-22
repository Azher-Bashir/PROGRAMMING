#include <iostream>

using namespace std;

int main()
{
    int i, j, k;
    for (i = 5; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
        for (i = 5; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << endl;
        }
        cout << "*";
    }
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
}