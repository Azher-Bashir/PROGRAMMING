#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
// just testing outs
int main()
{
    ifstream file_read;
    ofstream file_write;
    string file_name1 = "fact_data.txt";
    string file_name2 = "fact_result.txt";
    file_read.open(file_name1);
    file_write.open(file_name2);
    while (!file_read.eof())
    {
        int num = 1;
        int fact = 1;
        file_read >> num;
        // file_write << num << endl;
        file_write << "This is Factorial of " << num << "= ";
        while (num >= 1)
        {
            fact *= num;
            num--;
        }
        file_write << fact << endl;
    }
    file_read.close();
    file_write.close();
    return 0;
}

// {
//     int num = 1;
//     int fact = 1;
//     cout << "Enter a number:";
//     cin >> num;
//     while (num >= 1)
//     {
//         fact *= num;
//         num--;
//     }
//         cout << "factorial is:" << fact;
//     return 0;
// }