#include<iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0))
    {
    cout << "The year is leap year";
    }
    else 
    {
        cout << "The year is not a leap year..";
    }
    system("pause");
    return 0;
}
 