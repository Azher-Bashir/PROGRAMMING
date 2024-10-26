#include <iostream>

using namespace std;

int main()
{
    int calls, bill;
    cout << "Enter the number of calls: ";
    cin >> calls;
    if (calls <= 100)
    {
        bill = 200;
        cout << "Total bill is " << bill << endl;
    }
    else if (calls > 100 && calls <= 150)
    {
        bill = 200 + ((calls - 100) * 0.6);
        cout << "Total bill is: " << bill << endl;
    }
    else if (calls > 150 && calls <= 200)
    {
        bill = 200 + (0.6 * 50) + ((calls - 150) * 0.5);
        cout << "Total bill is " << bill << endl;
    }
    else if (calls > 200)
    {
        bill = 200 + (0.6 * 50) + (0.5 * 50) + ((calls - 200) * 0.4);
        cout << "Total bill is " << bill << endl;
    }
    else
    {
        cout << "Invalide entry..........." << endl;
        cout << "Please enter correct number." << endl;
    }
    system("pause");
    return 0;
}