//Findin th smallest and the largest of  all the numbers.

#include <iostream>

using namespace std;

int n, smallest = INT_MAX, largest = INT_MIN;
void smallest_of_all(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "The smallest of all the elements of the arrays is: " << smallest << endl;
}

void largest_of_all(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "The largest of all the numbers enters in tha array is: " << largest << endl;
}

int main()
{
    cout << "Enter the length of the arrays: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "th element of the array: ";
        cin >> arr[i];
    }

    smallest_of_all(arr, n);
    largest_of_all(arr, n);

    return 0;
}