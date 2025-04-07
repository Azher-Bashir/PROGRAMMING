#include<iostream>
#include<string>
#include"L_header.h"
int main() {
    Student Course_1;
    Student Name;

    cout << "Enter first Name: ";
    cin >> Name.first_name;
    cout << "Enter Last Name: ";
    cin >> Name.last_name;
    cout << "Complete name of student: " << Name.first_name << " " << Name.last_name << endl;

    cout << "Enter course name:" << endl
         << "1. English" << endl
         << "2. History" << endl
         << "3. Math" << endl
         << "ENTER Name of Course, You want to find grade: ";
    cin >> Course_1.course;

    float grade = 0;

    if (Course_1.course == "English" || Course_1.course == "ENGLISH" || Course_1.course == "english") {
        cout << "Enter Attendance, Project, Midterm, Final Exam: ";
        cin >> Course_1.attendance >> Course_1.project >> Course_1.midterm >> Course_1.final_exam;
        grade = Course_1.English_grade(Course_1.attendance, Course_1.project, Course_1.midterm, Course_1.final_exam);
        cout << "English grade is: " << grade << endl;
        cout << "Final Grade: " << Course_1.Grading_scheme(grade) << endl;
    }
    else if (Course_1.course == "History" || Course_1.course == "HISTORY" || Course_1.course == "history") {
        cout << "Enter Term Paper, Midterm, Final Exam: ";
        cin >> Course_1.term_paper >> Course_1.midterm >> Course_1.final_exam;
        grade = Course_1.History_grade(Course_1.term_paper, Course_1.midterm, Course_1.final_exam);
        cout << "History grade is: " << grade << endl;
        cout << "Final Grade: " << Course_1.Grading_scheme(grade) << endl;
    }
    else if (Course_1.course == "Math" || Course_1.course == "MATH" || Course_1.course == "math") {
        cout << "Enter Average of 3 Quizzes, Test 1, Test 2, Final Exam: ";
        cin >> Course_1.quiz_3 >> Course_1.test_1 >> Course_1.test_2 >> Course_1.final_exam;
        grade = Course_1.Math_grade(Course_1.quiz_3, Course_1.test_1, Course_1.test_2, Course_1.final_exam);
        cout << "Math grade is: " << grade << endl;
        cout << "Final Grade: " << Course_1.Grading_scheme(grade) << endl;
    }
    else {
        cout << "Invalid!" << endl;
    }

    return 0;
}