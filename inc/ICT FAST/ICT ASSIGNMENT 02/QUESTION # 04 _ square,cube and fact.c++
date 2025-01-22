//QUESTION # 04 _ Write a C++ program to read data from a text file and display it on the
// output file along with its square, cube, and factorial. Explain why is it necessary to open
// the file before reading from it?

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ifstream file_read;
    ofstream file_write;
    string file_name1 = "sq, cube and fact data.txt";
    string file_name2 = "output sq, cube and fact data.txt";
    file_read.open(file_name1);
    file_write.open(file_name2);
    file_write << "Number" << '\t' << "Square" << '\t' << "Cube" << '\t' << "Factorial" << endl;
    while (!file_read.eof())
    {

        int num = 1, fact = 1;
        file_read >> num;
        int n = num;
        while (n >= 1)
        {
            fact *= n;
            n--;
        }

        file_write << num << '\t' << '\t' << pow(num, 2) << '\t' << '\t' << pow(num, 3) << '\t' << '\t' << fact << endl;
    }
    file_read.close();
    file_write.close();
    // system("pause");
    return 0;
}