#include <iostream>

using namespace std;

int main()
{
    double marks;
    cout << "Enter the marks of the student: ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade is A";
    }
    else if (marks >= 75 &&  marks <= 89)

    {
        cout << "Grade is B";
    }
    else if (marks >= 60 && marks < 75)
    {
        cout << "Grade is C";
    }
    else if (marks >= 45 && marks < 60)
    {
        cout << "Grade is D";
    }
    else 
    {
        cout << "The grade is F";
    }
    system("pause");
    return 0;
}