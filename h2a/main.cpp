#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //Type Car object car1 in stack memory
    Car car1;

    car1.setBrand("Skoda");
    car1.setModel("Octavia");
    car1.setYearModel(2021);
    car1.printData();
    std::cout << endl;

    //Type Rectangle object rectangle1 in heap memory
    Rectangle *rectangle1 = new Rectangle;
    rectangle1->setHeight(10);
    rectangle1->setWidth(3);
    cout << "Area: " << rectangle1->getArea() << endl;
    cout << "Circumference: " << rectangle1->getCircum() << endl;
    delete rectangle1;
    rectangle1 = nullptr;
    std::cout << endl;

    //Type Student object with a smart pointer
    unique_ptr<Student> student1 = make_unique<Student>();
    student1 -> setName("Mikko Mallikas");
    student1 -> setStudentNumber(1554888495);
    student1 -> setAverage(4.5);

    std::cout << "Student: " << "Name: " << student1->getName() << endl << "Student number: " << student1 -> getStudentNumber() << endl << "Average (GPA): " << student1 -> getAverage() << endl;
    return 0;
}
