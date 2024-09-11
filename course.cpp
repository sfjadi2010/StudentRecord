#include <iostream>
#include <string>
#include "include\course.h"

using namespace std;

Course::Course(int cid, string cname, int ccredits) {
  this->course_id = cid;
  this->course_name = cname;
  this->course_credits = ccredits;
}

Course::~Course() {}

void Course::set_course_id(int cid) {
  this->course_id = cid;
}

int Course::get_course_id() {
  return course_id;
}

void Course::set_course_name(string cname) {
  this->course_name = cname;
}

string Course::get_course_name() {
  return course_name;
}

void Course::set_course_credits(int ccredits) {
  this->course_credits = ccredits;
}
