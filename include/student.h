#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        int id;
        string name;
        string semester;
    public:
        Student(int sid, string sname, string ssemester);
        ~Student();
        void set_id(int sid);
        int get_id();

        void set_name(string sname);
        string get_name();

        void set_semester(string semester);
        string get_semester();
};

#endif // STUDENT_H