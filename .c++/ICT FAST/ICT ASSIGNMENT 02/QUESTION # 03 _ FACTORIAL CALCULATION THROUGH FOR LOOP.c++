//QUESTION # 03 _ Write a C++ program to calculate the factorial of a number using
// a for loop. Explain why is a loop necessary for this calculation?

#include <iostream>

using namespace std;

int main()
{
    long long int num,fact = 1;
    cout << "Enter the number: ";
    cin >> num;
    for(long long int i = num; num >= 1; i++)
    {
        fact *= num;
        num--;
    }
    cout << "Factorial of the number is: " << fact << endl;

    // system("pause");
    return 0;
}