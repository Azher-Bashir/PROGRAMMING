// QUESTION # 02 _ Write a C++ program that uses nested loops to print a pattern of stars in
//  the shape of a triangle. Explain why are nested loops necessary for this tasks?

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = num - 1; j >= i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        for (int l = 2; l <= i; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
    // system("pause");
    return 0;
}