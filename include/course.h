#pragma once

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course
{
    private:
        int course_id;
        string course_name;
        int course_credits;
    public:
        Course(int cid, string cname, int ccredits);
        ~Course();
        
        void set_course_id(int cid);
        int get_course_id() const;
        
        void set_course_name(string cname);
        string get_course_name() const;

        void set_course_credits(int ccredits);
        int get_course_credits() const;
};

#endif // COURSE_H