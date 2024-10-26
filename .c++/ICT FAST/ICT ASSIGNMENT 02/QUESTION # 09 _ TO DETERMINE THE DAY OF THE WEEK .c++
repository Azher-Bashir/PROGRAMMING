//QUESTION # 09 _ Write a C++ program to display the day of the week based on a user-
// entered number (1-7) using a switch-case statement. Explain why is a switch-
// case statement well-suited for this task?

#include <iostream>

using namespace std;

int main()
{
    char selection = ' ';
    cout << "Plaese enter you selection (A, B, C, D, E, F or G)= ";
    cin >> selection;
    if (selection == 'A')
    {
        cout << "Monday";
    }
    else if (selection == 'B')
    {
        cout << "Tuesday";
    }
    else if (selection == 'C')
    {
        cout << "Wednesday";
    }
    else if (selection == 'D')
    {
        cout << "Thusrday";
    }
    else if (selection == 'E')
    {
        cout << "Friday";
    }
    else if (selection == 'F')
    {
        cout << "Saturday";
    }
    else if (selection == 'G')
    {
        cout << "Sunday";
    }
    else
    {
        cout << "Wrong selection";
    }
    // system ("pause");
    return 0;
}