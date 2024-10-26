#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ifstream file_read;
    string file_name1 = "square_and_cube.txt";
    ofstream file_write;
    string file_name2 = "output_square_and_cube.txt";
    file_read.open(file_name1);
    file_write.open(file_name2);
    file_write << "input numbers" << '\t' << "output numbers" << endl;

    
    //for loop..............................................................................................................................

    // for (int num = 0; !file_read.eof(); ++num)
    // {
    //     file_read >> num;
    //     file_write << pow(num, 1) << '\t' << '\t' << '\t' << '\t' << pow(num, 1) << '\t' << pow(num, 2) << '\t' << pow(num, 3) << endl;
    //     cout << "num = " << num << endl;
    // }
    
    
    // while loop.............................................................................................................................

    while (!file_read.eof())
    {
        int num = 0;
        file_read >> num;
        file_write << pow(num, 1) << '\t' << '\t' << '\t' << '\t' << pow(num, 1) << '\t' << pow(num, 2) << '\t' << pow(num, 3) << endl;
        cout << "num=" << num << endl;
    }

    file_read.close();
    file_write.close();
    return 0;
}