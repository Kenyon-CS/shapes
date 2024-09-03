#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l = 0, double w = 0);
    void setLength(double l);
    void setWidth(double w);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    double getPerimeter() const;
    std::string describe() const override;
};

#endif // RECTANGLE_H
