// Any year is input by the user. Write a program to determine whether the year is a leap year or not by using switch case.
// How to determine whether a year is a leap year
// To determine whether a year is a leap year, follow these steps :
// 1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
// 2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
// 3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
// 4. The year is a leap year(it has 366 days).
// 5. The year is not a leap year(it has 365 days).
#include <iostream>
using namespace std;
int main()
// {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     switch (year % 4)
//     {
//     case 0:
//         switch (year % 100)
//         {
//         case 0:
//             switch (year % 400)
//             {
//             case 0:
//                 cout << year << " is a leap year.";
//                 break;
//             default:
//                 cout << year << " is not a leap year.";
//             }
//             break;
//         default:
//             cout << year << " is a leap year.";
//         }
//         break;
//     default:
//         cout << year << " is not a leap year.";
//     }
//     return 0;
// }
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    switch ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
    case true:
        cout << "The year is a leap year" << endl;
        break;
    case false:
        cout << "The year is not a leap year" << endl;
        break;
    }
    // system ("pause");
    return 0;
}