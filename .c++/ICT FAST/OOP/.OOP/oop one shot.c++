#include <iostream>
#include <string>

using namespace std;
class teacher
{
    private:
    double salary;
    public:
    //properties
    string name, department, subject;

    //setter
    void set_salary(double s)
    {
        salary = s;
    }

    // getter
    double get_salary()
    {
        return salary;
    }
};

int main()
{



    return 0;
}