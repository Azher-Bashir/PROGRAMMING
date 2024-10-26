#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ifstream file_read;
    ofstream file_write;
    string file_name1 = "quiz_result.txt";
    string file_name2 = "quiz_total.txt";
    file_read.open(file_name1);
    file_write.open(file_name2);
    // int n = 1;
    while (!file_read.eof())
    {
        for(int num = 1;num < 5; num++)
        {
        int A = 1, B = 1, C = 1, D = 1;
        file_read >> A >> B >> C;
        file_write << "This is total of student  " << num << "= ";
        file_write << (A + B + C) << endl;
        }

    }
    file_read.close();
    file_write.close();
    return 0;
}