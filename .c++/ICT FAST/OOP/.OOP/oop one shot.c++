#include <iostream>
#include <string>

using namespace std;
class teacher
{
private:
    double salary;

public:
    // properties of the object
    string name, department, subject;
    // Non_parametrized constructor

    // teacher()
    // {
    //     cout << "Hi! Welcome to the teacher's portal" << endl;
    // }

    // parametrized constructor
    teacher(string name, string department, string subject, double salary)
    {
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    }
    // properties

    // setter
    void set_salary(double s)
    {
        salary = s;
    }

    // getter
    double get_salary()
    {
        return salary;
    }

    void get_info()
    {
        // cout << "Name: " << name;
        // cout << "Departmnet: " << department;
        // cout << "Subject: " << subject;
        // cout << "Salary: " << salary;

        cout << name << '\t' << '\t' << department << '\t' << subject << '\t' << '\t' << '\t' << salary << endl;
    }
};

int main()
{
    teacher t1("Umair Amjad", "Computer Science", "PF", 50000);
    teacher t2("Muhammad Waleed", "Electrical Engineering", "ICT", 78000);
    cout << "Name" << '\t' << '\t' << '\t' << "Department" << '\t' << '\t' << "Subject" << '\t' << '\t' << '\t' << "Salary" << endl;
    t1.get_info();
    t2.get_info();

    return 0;
}