#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cout << "Enter teh legth of the array: ";
    cin >> n;
    int number[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " nujmber of the array: ";
        cin >> number[i];
    }

    cout << "Which number of the array you want to be printed: ";
    cin >> a;

    cout << number[a] << endl;
    return 0;
}