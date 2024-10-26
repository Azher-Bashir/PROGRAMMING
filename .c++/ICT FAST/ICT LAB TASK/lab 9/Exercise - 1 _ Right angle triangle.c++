//In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides.
// Write a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int  a, b, c;
    cout << "Enter the side a: ";
    cin >> a;
    cout << "Enter the side b: ";
    cin >> b;
    cout << "Enter the side c: ";
    cin >> c;
    if (pow (a,2) == pow(b,2) + pow(c,2) || pow (b,2) == pow(a,2) + pow(c,2) || pow (c,2) == pow(b,2) + pow(a,2))
    {
        cout << "The triangle is a right angle triangle:" << endl;
    }
    else 
    {
        cout << "The triangle is not a right angle triangle..." << endl;
    }
    system("pause");
    return 0;
}