// This is selection sorting.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the length of array: ";
    cin >> n;

    int array[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " number of the array: ";
        cin >> array[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array [i];
                array[i] = array[j];
                array [j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}