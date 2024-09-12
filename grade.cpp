#include <iostream>
#include <string>
#include "include\grade.h"

using namespace std;

Grade::Grade(int sid, int cid, unsigned char sgrade)
{
  this->student_id = sid;
  this->course_id = cid;
  this->grade = sgrade;
}

Grade::~Grade() {}

void Grade::set_student_id(int sid)
{
  this->student_id = sid;
}

int Grade::get_student_id()
{
  return student_id;
}

void Grade::set_course_id(int cid)
{
  this->course_id = cid;
}

int Grade::get_course_id()
{
  return course_id;
}

void Grade::set_grade(unsigned char grade)
{
  this->grade = grade;
}

unsigned char Grade::get_grade()
{
  return grade;
}