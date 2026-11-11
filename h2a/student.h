#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
public:
    Student();
    void setName(string);
    void setStudentNumber(int);
    void setAverage(double);

    string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
private:
    string name;
    int studentNumber;
    double average;
};

#endif // STUDENT_H
