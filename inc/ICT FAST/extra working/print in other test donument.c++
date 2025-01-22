//CODE TO PRINT THE TEXT IN THE TEXT FILE AND COPY IT IN ANOTHER FILE AS AN OUTPUT TEST FILE...

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ifstream file_read;
    string file_name1 = "input.txt";
    ofstream file_write;
    string file_name2 = "output.txt";
    file_read.open(file_name1);
    file_write.open(file_name2);

    for(int num = 0; num <= 1; ++num )
    //  for(int i = 3; i < 0; i-- )
    // for(int i = 0; !file_read.eof(); i++)
    {
        // int num = 0; 
        string line = ""; 
        char alpha = ' ';

         file_read >> num;
        //  file_read >> i;
         file_read >> line;
         file_read >> alpha;

         file_write << num << endl;
        //  file_write << i << endl;
         file_write << line << endl;
         file_write << alpha;
    }

    file_read.close();
    file_write.close();
    return 0;
}


    // while (!file_read.eof())
    // {
    //     int num = 0;
    //     string line = "";
    //     char alpha = ' ';
    //     file_read >> num;
    //     file_read >> line;
    //     file_read >> alpha;

    //     file_write << num << endl;
    //     file_write << line << endl;
    //     file_write << alpha << endl;

    //     cout << "numbers=" << num << endl;
    //     cout << "string=" << line << endl;
    //     cout << "character=" << alpha << endl;
    // }




// CODE FOR ONLY PRINTING THE VALUES STORES INSIDE THE TEXT FILE...

// #include <iostream>
// #include <fstream>
// #include <cmath>
// #include <string>
// using namespace std;

// int main()
// {
//     ifstream file_read;
//     string file_name = "input.txt";
//     file_read.open(file_name);
//     while (!file_read.eof())
//     {
//         int num = 0;
//         string line = "";
//         char alpha = ' ';
//         file_read >> num;
//         file_read >> line;
//         file_read >> alpha;
//         cout << "numbers=" << num << endl;
//         cout << "string=" << line << endl;
//         cout << "character=" << alpha << endl;
//     }
//     file_read.close();
//     return 0;
// }