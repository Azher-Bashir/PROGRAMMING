#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ifstream file_read;
    ofstream file_write;
    string file_name1 = "employee_data.txt";
    string file_name2 = "employee_annum_data.txt";
    file_read.open(file_name1);
    file_write.open(file_name2);
    file_write << "ID no." << '\t' << "Monthly_Salary" << '\t' << "annual_salary" << endl;
    while (!file_read.eof())
    {
        int B;
        float A, total_annual_salary = 1.0;
        file_read >> B >> A;
        total_annual_salary = (A * 12) - ((A * 12) * 5 / 100);
        file_write << B << '\t' << '\t' << A << '\t' << '\t' << '\t' << total_annual_salary << endl;
    }
    file_read.close();
    file_write.close();
    return 0;
}

//{
//	float A = 1.0, annual_salary = 1.0, total_intrest = 1.0, after_intrest = 1.0;
//	int n = 1;
//	while (n >= 1)
//	{
//		cout << "salary=";
//		cin >> A;
//		//annual_salary = A * 12;
//		//total_intrest = annual_salary * (5/100) ;
//		//after_intrest = annual_salary - total_intrest;
//		annual_salary = (A * 12) - ((A * 12) * (5) / 100);
//		cout << annual_salary << endl;
//		n++;
//	}
//}