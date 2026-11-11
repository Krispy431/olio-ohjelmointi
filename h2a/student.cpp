#include "student.h"

Student::Student() {}

//Setters
void Student::setName(string name) {
    this->name=name;
}

void Student::setStudentNumber(int studentNumber) {
    this->studentNumber=studentNumber;
}

void Student::setAverage(double average) {
    this->average=average;
}

//Getters
string Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

double Student::getAverage() const {
    return average;
}