#include <iostream>

using namespace std;

int main()
{
    // int size;
    // cout << "Enter the size of array: ";
    // cin >> size;

    // int arr[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter " << i << "th element of the array: ";
    //     cin >> arr[i];
    // }
    int arr[5] = {1, 2, 3, 4, 5};

    int *a;
    *a = arr[2];

    // cout << &a << endl;
    cout << a << endl;
    cout << *a << endl;

    return 0;


}