#include <iostream>
#include "student.h"
#include "studentrecord.h"

using namespace std;

void initialize_data(StudentRecords&);

int main()
{
    StudentRecords studentRecords;
    initialize_data(studentRecords);

    Student student = studentRecords.get_student(2);

    cout << student.get_name() << endl;

    cout << endl;
    return (0);
}

void initialize_data(StudentRecords& studentRecords)
{
    studentRecords.add_student(Student(1, "Nancy Grahm", "First"));
    studentRecords.add_student(Student(2, "George Coper", "Second"));
    studentRecords.add_student(Student(3, "John DeAlto", "First"));
}