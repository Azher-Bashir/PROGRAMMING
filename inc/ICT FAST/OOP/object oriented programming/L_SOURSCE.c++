#include<iostream>
#include<string>
#include"L_header.h"
Student::Student() {
    attendance=0;
    project=0;
    midterm=0;
    term_paper=0;
    final_exam=0;
    quiz_3=0;
    test_1=0;
    test_2=0;
}

float Student::English_grade(float attendance, float project, float midterm, float final_exam) {
    return (attendance * 0.1 + project * 0.3 + midterm * 0.3 + final_exam * 0.3);
}

float Student::History_grade(float term_paper, float midterm, float final_exam) {
    return (term_paper * 0.25 + midterm * 0.35 + final_exam * 0.4);
}

float Student::Math_grade(float quiz_3, float test_1, float test_2, float final_exam) {
    return (quiz_3 * 0.1 + test_1 * 0.25 + test_2 * 0.25 + final_exam * 0.4);
}

string Student::Grading_scheme(float grade) {
    if (grade < 50) return "F";
    else if (grade < 70) return "B";
    else if (grade < 90) return "A";
}