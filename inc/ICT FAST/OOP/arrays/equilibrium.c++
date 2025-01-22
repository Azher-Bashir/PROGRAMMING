#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the ";
    for(int i = 0; i < size; i++)
    {
        cout << i << "th term is: ";
        cin >> arr[i];
    }

}