#include <iostream>

using namespace std;

static int search(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
            // cout << "The number you entered is available at the position " << i;
        }
    }
    return -1;
}
int main()
{
    int n;

    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << "th element of the array ";
        cin >> arr[i];
    }

    int num;
    cout << "Enter the num you want to search: ";
    cin >> num;

    cout << "The Entered term's position is: " << search(arr, n, num) << endl;

    return 0;
}