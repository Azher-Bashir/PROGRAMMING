#include <iostream>

using namespace std;

int main()
{
    int size, sum1, sum2;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the ";
    for (int i = 0; i < size; i++)
    {
        cout << i << "th term is: ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            sum1 += arr[j];
        }
        for (int k = i; k >= 0; k--)
        {
            sum2 += arr[k];
        }

        if (sum1 == sum2)
        {
            cout << "The series is at equilibrium at" << arr[i];
            cout << "Good work !!!";
            exit(0);
        }
        else{
            cout << "No result.";
        }
    }
    return 0;
}