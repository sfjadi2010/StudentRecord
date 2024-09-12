#pragma once

#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H

#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "course.h"

using namespace std;

class StudentRecords
{
    private:
        vector<Student> Students;
        vector<Course> Courses;

    public:
        void add_student(Student);
        Student get_student(int student_id);

        void add_course(Course);
        Course get_course(int course_id);
};

#endif // STUDENTRECORD_H