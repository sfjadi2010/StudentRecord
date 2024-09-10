#pragma once

#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H

#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

class StudentRecords
{
    private:
        vector<Student> Students;

    public:
        void add_student(Student);
        Student get_student(int student_id);
};

#endif // STUDENTRECORD_H