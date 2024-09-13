#include "include\studentrecord.h"

// student functions
void StudentRecords::add_student(Student student)
{
    Students.push_back(student);
}

Student StudentRecords::get_student(int sid)
{
    int i = 0;
    while (i < Students.size() && Students[i].get_id() != sid)
    {
        i++;
    }

    return Students[i];
}

// course functions
void StudentRecords::add_course(Course course)
{
    Courses.push_back(course);
}

Course StudentRecords::get_course(int cid)
{
    int i = 0;
    while (i < Courses.size() && Courses[i].get_course_id() != cid)
    {
        i++;
    }

    return Courses[i];
}

void StudentRecords::add_grade(Grade grade)
{
    Grades.push_back(grade);
}

vector<Grade> StudentRecords::get_grade(int sid)
{
    vector<Grade> filtered_grades;

    // Lambda function to filter based on student_id
    auto filter_by_student = [sid](const Grade& g) {
        return g.get_student_id() == sid;
    };

    copy_if(Grades.begin(), Grades.end(), back_inserter(filtered_grades), filter_by_student);

    return filtered_grades;
}