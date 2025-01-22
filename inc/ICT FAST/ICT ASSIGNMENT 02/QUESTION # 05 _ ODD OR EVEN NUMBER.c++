// QUEATION # 05 _ Write a C++ program to check if a number is even or odd using an if-
// else statement. Explain why is an if-else statement suitable for this task?

#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "number is even";
	}
	else
	{
		cout << "number is odd";
	}
    // system("pause");
    return 0;
}