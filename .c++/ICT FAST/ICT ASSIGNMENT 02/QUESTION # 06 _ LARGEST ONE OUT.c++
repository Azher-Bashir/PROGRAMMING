//QUESTION # 06 _ Write a C++ program to find the largest of three numbers using nested if-
// else statements. Explain why are nested if-else statements necessary in this case?

#include <iostream>

using namespace std;

int main()
{
	long long int A = 1, B = 1, C = 1;
	cout << "Enter the value of A : ";
	cin >> A;
	cout << "Enter the value of B : ";
	cin >> B;
	cout << "Enter the value of C : ";
	cin >> C;
	if (A > B && A > C)
	{
		cout << "The largest number is A: " << A;
	}
	else if (C > B && C > A)
	{
		cout << "The largest number is C: " << C;
	}
	else if (B > A && B > C)
	{
		cout << "The largest number is B: " << B;
	}
	else
	{
		cout << "All are equal";
	}
	// system("pause");
	return 0;
}
