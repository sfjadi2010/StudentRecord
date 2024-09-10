#include "studentrecord.h"

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