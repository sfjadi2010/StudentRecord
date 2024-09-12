#pragma once

#ifndef GRADE_H
#define GRADE_H

#include <iostream>
#include <string>

class Grade
{
    private:
        int student_id;
        int course_id;
        unsigned char grade;
    public:
        Grade(int sid, int cid, unsigned char sgrade);
        ~Grade();

        void set_student_id(int sid);
        int get_student_id();

        void set_course_id(int cid);
        int get_course_id();

        void set_grade(unsigned char grade);
        unsigned char get_grade();
};

#endif // GRADE_H