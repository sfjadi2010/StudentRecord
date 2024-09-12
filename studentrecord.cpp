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