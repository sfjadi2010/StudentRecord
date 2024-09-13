#pragma once

#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "student.h"
#include "course.h"
#include "grade.h"

using namespace std;

class StudentRecords
{
    private:
        vector<Student> Students;
        vector<Course> Courses;
        vector<Grade> Grades;

    public:
        void add_student(Student);
        Student get_student(int student_id);

        void add_course(Course);
        Course get_course(int course_id);

        void add_grade(Grade);
        vector<Grade> get_grade(int sid);
};

#endif // STUDENTRECORD_H