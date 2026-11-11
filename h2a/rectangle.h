#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();
    double getArea() const;
    double getCircum() const;
    void setWidth(double);
    void setHeight(double);
private:
    double width;
    double height;
};

#endif // RECTANGLE_H
