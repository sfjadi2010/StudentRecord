#include <iostream>
#include "include\student.h"
#include "include\studentrecord.h"

using namespace std;

void initialize_data(StudentRecords&);

int main()
{
    StudentRecords studentRecords;
    initialize_data(studentRecords);

    Student student = studentRecords.get_student(2);
    Course course = studentRecords.get_course(3);

    cout << student.get_name() << endl;
    cout << course.get_course_name() << endl;

    cout << endl;
    return (0);
}

void initialize_data(StudentRecords& studentRecords)
{
    // adding students
    studentRecords.add_student(Student(1, "Nancy Grahm", "First"));
    studentRecords.add_student(Student(2, "George Coper", "Second"));
    studentRecords.add_student(Student(3, "John DeAlto", "First"));

    // adding courses
    studentRecords.add_course(Course(1, "ENG101", 3));
    studentRecords.add_course(Course(2, "MTH101", 3));
    studentRecords.add_course(Course(3, "CS101", 3));
}