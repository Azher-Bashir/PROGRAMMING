//QUESTION # 07 _ Write a C++ program to determine if a year is a leap year using an if-
// else statement.

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter the year : ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "The entered year is leap_year";
    }
    else
    {
        cout << "The enters year is not leap_year";
    }
    // system("pause");
    return 0;
}