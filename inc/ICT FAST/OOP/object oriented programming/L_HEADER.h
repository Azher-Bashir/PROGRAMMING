#ifndef STUDENT_RECORD
#define STUDENT_RECORD
#include<string>
using namespace std;
class Student {
    public:
        string first_name, last_name, course;
        float attendance, project, midterm, term_paper, final_exam, quiz_3, test_1, test_2;
    
        Student();
        float English_grade(float, float, float, float);
        float History_grade(float, float, float);
        float Math_grade(float, float, float, float);
        string Grading_scheme(float);
    };
#endif