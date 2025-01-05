#include <iostream>

using namespace std;

static int binary_search(int array[], int n, int num)
{
    int strt = 0, end = n;

    while (strt <= end)
    {
        int mid = end / 2;

        if (array[mid] == num)
        {
            return mid;
        }
        else if (array[mid] < num)
        {
            end = mid + 1;
        }
        else
            strt = mid + 1;
    }
    return -1;
}

int main()
{
    int n;

    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number of which you want the index: ";
    cin >> num;

    cout << "The result of binary search is: " << binary_search(arr, n, num) << endl;

    return 0;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     cout << "Hello World" << endl;

//     return 0;
// }