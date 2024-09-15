#include <iostream>
#include <string>
#include "include\student.h"

Student::Student(int sid, string sname, string ssemester)
{
    this->id = sid;
    this->name = sname;
    this->semester = ssemester;
}

Student::~Student() {}

void Student::set_id(int sid)
{
    this->id = sid;
}

int Student::get_id() const
{
    return this->id;
}

void Student::set_name(string sname)
{
    this->name = sname;
}

string Student::get_name() const
{
    return this->name;
}

void Student::set_semester(string ssemester)
{
    this->semester = ssemester;
}

string Student::get_semester() const
{
    return this->semester;
}