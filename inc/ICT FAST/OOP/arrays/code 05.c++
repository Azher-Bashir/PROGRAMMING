// This is bubble sorting just doing it don't knwo what to do???

#include <iostream>

using namespace std;

void bubble_sorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i ++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void output(int arr[], int n)
{
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
 
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " number of the array: ";
        cin >> arr[i];
    }

    cout << "The array you enterd is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    bubble_sorting(arr, n);
    output(arr, n);
    cout << endl;
    cout << "Size of arary is tha you enterd is: " << sizeof(arr) / sizeof(int) << endl;
    
    return 0;    
}